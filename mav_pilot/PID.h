/* This file defines the PID controllers for each state update */
#ifndef MICAV_PID
#define MICAV_PID

#include <Arduino.h>
#include <stdint.h>

#define DEBUG_SERIAL 1

/*#define KP_DYAW 0.10
#define KI_DYAW 0.01
#define KD_DYAW 0
#define PID_MIN_DYAW -30
#define PID_MAX_DYAW 30

#define KP_DPITCH 0.80
#define KI_DPITCH 0.20
#define KD_DPITCH 0.00
#define PID_MIN_DPITCH -50
#define PID_MAX_DPITCH 50*/

#define KP_PITCH 0.00
#define KI_PITCH 0.00
#define KD_PITCH 0.00
#define PID_MIN_PITCH -100
#define PID_MAX_PITCH 100

/*#define KP_DROLL 0.80
#define KI_DROLL 0.20 
#define KD_DROLL 0.00
#define PID_MIN_DROLL -50
#define PID_MAX_DROLL 50*/

#define KP_ROLL 0.88
#define KI_ROLL 0.07 
#define KD_ROLL 0.09
#define PID_MIN_ROLL -125
#define PID_MAX_ROLL 125

/*#define KP_DALTITUDE 0.80
#define KI_DALTITUDE 0.01
#define KD_DALTITUDE 0*/

//int16_t pid_dyaw(int16_t dyaw);

//int16_t pid_dpitch(int16_t dpitch);
int16_t pid_pitch(int16_t pitch);

//int16_t pid_droll(int16_t droll);
int16_t pid_roll(int16_t roll);

//int16_t pid_daltitude(int16_t daltitude);

#endif /* MICAV_PID */
