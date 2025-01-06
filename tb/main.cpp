#include "rtc.h"


#define ALARM_DATE 0x20241215        
#define ALARM_TIME 0x12559           
#define ALARM_FLAGS 0x0              
#define CALIBRATION_VALUE 9          
#define INITIAL_TIME 0x12345         
#define INITIAL_DATE 0x20241215      
#define WAIT_CYCLES 1000             
#define SECONDS_TO_WAIT 0x96         
#define TIMER_ADJUST 100                    

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    RTC rtc(true);

    rtc.reset();

    rtc.set_timer(SECONDS_TO_WAIT);

    rtc.set_alarm(ALARM_DATE, ALARM_TIME, ALARM_FLAGS);

    rtc.calibrate(CALIBRATION_VALUE);

    rtc.set_time(INITIAL_TIME);
    rtc.set_date(INITIAL_DATE);

    uint32_t start_time = rtc.get_time();

    rtc.wait_clk(WAIT_CYCLES);

    uint32_t end_time = rtc.get_time();

    std::cout << "Start Time: " << std::hex << start_time << std::endl;
    std::cout << "End Time: " << std::hex << end_time << std::endl;

    start_time = rtc.time_to_sec(start_time);
    end_time = rtc.time_to_sec(end_time);

    //checking the time account
    assert(end_time == start_time + TIMER_ADJUST);

    //alarm check
    bool alarm = rtc.wait_alarm(ALARM_DATE, ALARM_TIME);
    assert(alarm == true);

    rtc.wait_clk(WAIT_CYCLES);

    //timer check
    bool timer = rtc.wait_timer(SECONDS_TO_WAIT);
    assert(timer == true);

    return 0;
}