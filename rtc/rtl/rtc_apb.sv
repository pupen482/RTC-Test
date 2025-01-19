module rtc_apb
#(
    parameter int APB_ADDR_W = 32
)
(
    input logic pclk,
    input logic prst_n,
    APB.Slave   s_apb
);

// regs map (multiply by 4 to get address)
localparam int DATE_IDX         = 0             ; // r/w
localparam int CLOCK_IDX        = 1             ; // r/w
localparam int ALARM_DATE_IDX   = 2             ; // r/w
localparam int ALARM_CLOCK_IDX  = 3             ; // r/w
localparam int TIMER_IDX        = 4             ; // r/w
localparam int CALIBRE_IDX      = 5             ; // r/w
localparam int EVENT_FLAG_IDX   = 6             ; // w1c
localparam int INIT_SEC_CNT_IDX = 7             ; // r/w
localparam int UPDATE_IDX       = 8             ; // w1r (write 1 reset) | TODO: implement this feature in apb_regs
localparam int REGS_QTY         = UPDATE_IDX + 1;

// apb regs params
localparam int                    REGS_OFFSET = 4         ; // 32bit aligned addresses
localparam int                    APB_DATA_W  = APB_ADDR_W;
localparam logic [APB_ADDR_W-1:0] BASE_ADDR   = 'd0       ; // TODO: clarify what address

// read only regs indexes set for apb regs module
function bit [REGS_QTY-1:0] set_read_only_regs();
    bit [REGS_QTY-1:0] res;
    res = '0;
    return res;
endfunction : set_read_only_regs

// write '1' to clear regs indexes set for apb regs module
function bit [REGS_QTY-1:0] set_write_to_clear_regs();
    bit [REGS_QTY-1:0] res;
    res = '0;
    res[EVENT_FLAG_IDX] = 1;

    return res;
endfunction : set_write_to_clear_regs

localparam bit [REGS_QTY-1:0] READ_ONLY      = set_read_only_regs();
localparam bit [REGS_QTY-1:0] WRITE_TO_CLEAR = set_write_to_clear_regs();


// structs for registers bit mapping
typedef struct packed {
    logic [ 9:0]    en;         // 31...22
    logic [21:0]    data;       // 21...0
} clock_t;

typedef struct packed {
    logic           en;         // 31
    logic           reserved_1; // 30
    logic [ 5: 0]   match_mask; // 29...24
    logic [23:22]   reserved_0; // 23...22
    logic [21: 0]   data;       // 21...0
} alarm_clock_t;

typedef struct packed {
    logic           en;         // 31
    logic           retrig;     // 30
    logic [29:17]   reserved;   // 29...17
    logic [16:0]    cmp;        // 16...0
} timer_t;

typedef struct packed {
    logic [31:16] reserved;
    logic [15: 0] calibre_sec_cnt;
} calibre_t;

typedef struct packed {
    logic [31:2]    reserved;   // 31:2
    logic           timer_flag; // 1
    logic           alarm_flag; // 0
} event_flag_t;

typedef struct packed {
    logic [31:10] reserved;
    logic [ 9: 0] init;
} init_sec_cnt_t;

typedef struct packed {
    logic [31:7]    reserved;
    logic           upd_event_flag;   // 6
    logic           upd_calibre;      // 5
    logic           upd_timer;        // 4
    logic           upd_alarm_clock;  // 3
    logic           upd_alarm_date;   // 2
    logic           upd_clock;        // 1
    logic           upd_date;         // 0
} update_t;

// struct for all timer regs
typedef struct {
    update_t        update;
    init_sec_cnt_t  init_sec_cnt;
    event_flag_t    event_flag_o;
    event_flag_t    event_flag_i;
    calibre_t       calibre;
    timer_t         timer;
    alarm_clock_t   alarm_clock;
    logic   [31:0]  alarm_date;
    clock_t         clock;
    logic   [31:0]  date;
} regs_t;

// signals declarations
regs_t      all_regs;
logic [1:0] events;
logic [REGS_QTY - 1:0][APB_DATA_W - 1:0] reg_inputs;
logic [REGS_QTY - 1:0][APB_DATA_W - 1:0] reg_outputs;


// apb regs
apb_regs_intf #(
    .NO_APB_REGS   (REGS_QTY      ),   // number of registers
    .APB_ADDR_WIDTH(APB_ADDR_W    ),   // address width of `paddr`
    .ADDR_OFFSET   (REGS_OFFSET   ),   // address offset in bytes
    .APB_DATA_WIDTH(APB_DATA_W    ),   // data width of the registers
    .REG_DATA_WIDTH(APB_DATA_W    ),
    .READ_ONLY     (READ_ONLY     ),
    .WRITE_TO_CLEAR(WRITE_TO_CLEAR)
) apb_regs (
    .pclk_i     (pclk       ),
    .presetn_i  (prst_n    ),
    .slv        (s_apb      ),
    .base_addr_i(BASE_ADDR  ),   // base address of the registers
    .reg_init_i (reg_inputs ),   // values for the read only registers
    .reg_q_o    (reg_outputs)    // actual regs' values
);


always_comb begin : regs_handler
    all_regs.event_flag_o   = reg_outputs[EVENT_FLAG_IDX];
    all_regs.calibre        = reg_outputs[CALIBRE_IDX];
    all_regs.timer          = reg_outputs[TIMER_IDX];
    all_regs.alarm_clock    = reg_outputs[ALARM_CLOCK_IDX];
    all_regs.alarm_date     = reg_outputs[ALARM_DATE_IDX];
    all_regs.clock          = reg_outputs[CLOCK_IDX];
    all_regs.date           = reg_outputs[DATE_IDX];
    all_regs.update         = reg_outputs[UPDATE_IDX];

    reg_inputs = reg_outputs;
    reg_inputs[EVENT_FLAG_IDX] = all_regs.event_flag_i;
end


// assign events = {all_regs.event_flag.timer_flag, all_regs.event_flag.alarm_flag};

rtc_top i_rtc_top (
    .clk_i               (pclk                            ),
    .rstn_i              (prst_n                          ),
    .date_update_i       (all_regs.update.upd_date        ),
    .date_i              (all_regs.date                   ),
    .date_o              (                                ),   // TODO: clarify for what are output values of regs
    .clock_update_i      (all_regs.update.upd_clock       ),
    .clock_o             (                                ),
    .clock_i             (all_regs.clock.data             ),
    .init_sec_cnt_i      (all_regs.init_sec_cnt.init      ),
    .calibre_update_i    (all_regs.update.upd_calibre     ),
    .calibre_sec_cnt_i   (all_regs.calibre.calibre_sec_cnt),
    .calibre_sec_cnt_o   (                                ),
    .timer_update_i      (all_regs.update.upd_timer       ),
    .timer_enable_i      (all_regs.timer.en               ),
    .timer_retrig_i      (all_regs.timer.retrig           ),
    .timer_target_i      (all_regs.timer.cmp              ),
    .timer_value_o       (                                ),
    .alarm_enable_i      (all_regs.alarm_clock.en         ),
    .alarm_mask_i        (all_regs.alarm_clock.match_mask ),
    .alarm_update_clock_i(all_regs.update.upd_alarm_clock ),
    .alarm_clock_i       (all_regs.alarm_clock.data       ),
    .alarm_clock_o       (                                ),
    .alarm_update_date_i (all_regs.update.upd_alarm_date  ),
    .alarm_date_i        (all_regs.alarm_date             ),
    .alarm_date_o        (                                ),
    .event_flag_update_i (all_regs.update.upd_event_flag  ),
    .event_flag_i        (                                ), // will be removed cause w1c type
    .event_flag_o        (all_regs.event_flag_i           ), // actual flags | TODO: may be not needed cause we can connect event_o to reg_inputs[EVENT_FLAG_IDX]
    .event_o             (                                )  // status reg events
);


endmodule : rtc_apb