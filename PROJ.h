#ifndef PROJ_H
#define PROJ_H

enum {
    AM_HW3 = 6,
    TIMER_PERIOD_MILLI = 250,	
    BASESTATION_ID = 0,
    GROUPID = 230
};

typedef nx_struct hw3_msg {
    nx_uint32_t time;
    nx_uint16_t nodeid;
    nx_uint16_t destid;
    nx_uint16_t groupid;
    nx_uint16_t counter;
    nx_uint16_t noiselvl;
    nx_uint8_t taken;
} hw3_msg;


#endif 
