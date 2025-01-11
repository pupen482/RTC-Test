#ifndef RTC_H
#define RTC_H

#include "Vrtc_top.h"      
#include <verilated.h>
#ifdef VM_TRACE
#include <verilated_vcd_c.h>
#endif 
#include <cstdint>
#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>

class RTC {
private:
    Vrtc_top* top;                     
    VerilatedVcdC* vcd;                
    std::atomic<bool> clk_running;     
    std::thread clk_thread;            
    uint64_t sim_time;                 
    std::atomic<bool> clk;

    void clock_generator();            

public:
    RTC(bool enable_vcd);
    ~RTC();

    void reset();
    void set_time(uint32_t time);
    void set_date(uint32_t date);
    void calibrate(uint16_t seconds);
    void set_alarm(uint32_t date, uint32_t time, uint32_t mask);
    void wait_clk_posedge();
    uint32_t get_time() const;
    uint32_t get_date() const;
    void print_status() const;
    uint32_t time_to_sec(uint32_t time);
    bool wait_alarm(uint32_t date, uint32_t time);
    void set_timer(uint32_t time);
    bool wait_timer(uint32_t time);
    void print_time();

    void run_cycles(int cycles);
    void wait_clk(int cycles);
};

#endif 