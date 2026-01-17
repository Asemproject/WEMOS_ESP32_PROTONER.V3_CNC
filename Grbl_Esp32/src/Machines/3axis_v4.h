#pragma once
// clang-format off

/*
    3axis_asem_mod.h
    Adapted for ESP32 Mod by Asem (FluidNC conversion)
    
    Based on Grbl_ESP32 structure.
*/

#define MACHINE_NAME            "ESP32 Mod by Asem"

// -------------------------------------------------------------------------
//  STEPPER MOTORS (From FluidNC Config)
// -------------------------------------------------------------------------
// X Axis: Step=gpio.2, Dir=gpio.15
#define X_STEP_PIN              GPIO_NUM_2
#define X_DIRECTION_PIN         GPIO_NUM_15

// Y Axis: Step=gpio.16, Dir=gpio.17
#define Y_STEP_PIN              GPIO_NUM_16
#define Y_DIRECTION_PIN         GPIO_NUM_17

// Z Axis: Step=gpio.25, Dir=gpio.26
#define Z_STEP_PIN              GPIO_NUM_25
#define Z_DIRECTION_PIN         GPIO_NUM_26

// Stepper Enable (shared): gpio.13
#define STEPPERS_DISABLE_PIN    GPIO_NUM_13

// -------------------------------------------------------------------------
//  LIMIT SWITCHES (From FluidNC Config)
// -------------------------------------------------------------------------
// X Limit: gpio.27
#define X_LIMIT_PIN             GPIO_NUM_27
// Y Limit: gpio.14
#define Y_LIMIT_PIN             GPIO_NUM_14
// Z Limit: gpio.4
#define Z_LIMIT_PIN             GPIO_NUM_4

// -------------------------------------------------------------------------
//  SD CARD / SPI (From FluidNC Config)
// -------------------------------------------------------------------------
// SPI: miso=19, mosi=23, sck=18, cs=5
#define SD_SPI_SCK_PIN          GPIO_NUM_18
#define SD_SPI_MOSI_PIN         GPIO_NUM_23
#define SD_SPI_MISO_PIN         GPIO_NUM_19
#define SD_CARD_CS_PIN          GPIO_NUM_5
// FluidNC defined Card Detect on 35
#define SD_CARD_DET_PIN         GPIO_NUM_35

// -------------------------------------------------------------------------
//  SPINDLE / COOLANT / PROBE / CONTROL
// -------------------------------------------------------------------------
/* NOTE: These are commented out because in your FluidNC config they were 
   set to NO_PIN. 
   
   CRITICAL: 
   - Old Spindle Pin was GPIO 2, which is now X_STEP.
   - Old Flood Pin was GPIO 25, which is now Z_STEP.
   Leaving them enabled would cause a crash/conflict.
*/

// #define PROBE_PIN            GPIO_NUM_32  // FluidNC: NO_PIN

// #define SPINDLE_TYPE         SpindleType::PWM
// #define SPINDLE_OUTPUT_PIN   GPIO_NUM_2   // CONFLICT: Used by X_STEP
// #define SPINDLE_ENABLE_PIN   GPIO_NUM_22  // FluidNC: NO_PIN

// #define COOLANT_MIST_PIN     GPIO_NUM_21  // FluidNC: NO_PIN
// #define COOLANT_FLOOD_PIN    GPIO_NUM_25  // CONFLICT: Used by Z_STEP

/*
   Control pins (Reset, Feed Hold, Start) are also NO_PIN in your config.
*/
// #define CONTROL_SAFETY_DOOR_PIN GPIO_NUM_35  // Used by SD Detect
// #define CONTROL_RESET_PIN       GPIO_NUM_34
// #define CONTROL_FEED_HOLD_PIN   GPIO_NUM_36
// #define CONTROL_CYCLE_START_PIN GPIO_NUM_39
