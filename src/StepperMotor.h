/*
    Stepper motor
    
    Author: Dmitrii Kurskov <dmitrii@kurskov.ru>
    GitHub: https://github.com/kurskov/Arduino-StepperMotor
    Version: 1.0.0
    MIT license
*/

#ifndef _DK_StepperMotor_h
#define _DK_StepperMotor_h

#include "Arduino.h"

class StepperMotor {
    public:
        /* Constructors */

        // Step-dir driver with or without enable pin
        StepperMotor(uint16_t steps; uint8_t step_pin; uint8_t dir_pin; uint8_t enable_pin = 0);
        // Four pins driver
        StepperMotor(uint16_t steps; uint8_t pin_A; uint8_t pin_B; uint8_t pin_C; uint8_t pin_D);


        /* Motor settings */

        // Invert direction pin (default is false)
        void invertDirPin();
        // Invert enable pin (default is false)
        void invertEnablePin();
        // Set motor max speed (steps per second) 
        // For half pitch mode step is half of full step
        // Default value is 300 steps per second.
        void setMaxSpeed(uint16_t max_speed);
        // Set/unset half pitch mode (default is false)
        void setHalfPitch(bool half_pitch);
        // Get half pitch mode value
        bool getHalfPitch();


        /* Motion parameters */

        // Set speed for motions (steps per second)
        void setSpeed(uint16_t speed);
        // Set speed for motions (degrees per second)
        void setSpeedDeg(uint8_t speed);
        // Set steps value for motion
        void setTarget(int16_t steps);
        // Set degrees value for motion
        void setTargetDeg(int16_t degrees);


        /* Basic functions */

        // Do one step
        bool step();
        // Enable motor
        void enable();
        // Disable motor
        void disable();


    private:
        uint16_t _steps;                        // number of steps per revolution
        uint8_t _step_pin = 0;
        uint8_t _dir_pin = 0;
        uint8_t _enable_pin = 0;
        uint8_t _pin_A, _pin_B, _pin_C, _pin_D;

        bool _invert_dir_pin = false;
        bool _invert_enable_pin = false;
        bool _half_pitch = false;
        bool _direction = true;                 // true - CW, false - CCW
        uint16_t _max_speed = 300; // FOR DEL
        uint16_t _min_steps_period;             // max speed
        uint16_t _steps_period;                 // it's the time between two steps
        uint16_t _steps_count;                  // number of steps to the target
};

#endif // _DK_StepperMotor_h
