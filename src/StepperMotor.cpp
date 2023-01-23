/*
    See StepperMotor.h for all information.
    Author: Dmitrii Kurskov <dmitrii@kurskov.ru>
*/

#include "StepperMotor.h"


// Constructors

StepperMotor::StepperMotor(uint16_t steps; uint8_t step_pin; uint8_t dir_pin; uint8_t enable_pin)
{
    _steps = steps;
    _step_pin = step_pin;
    _dir_pin = dir_pin;
    _enable_pin = enable_pin;
    
    pinMode(_step_pin, OUTPUT);
    digitalWrite(stepPin, LOW);

    pinMode(_dir_pin, OUTPUT);
    digitalWrite(_dir_pin, LOW);

    if (!_enable_pin) {
        pinMode(_enable_pin, OUTPUT);
        digitalWrite(_enablePin,LOW);
    }
}

// Motor settings

void StepperMotor::invertDirPin()
{
    _invert_dir_pin = !_invert_dir_pin;
}

void StepperMotor::invertEnablePin()
{
    _invert_enable_pin = !_invert_enable_pin;
}

void StepperMotor::setMaxSpeed(uint16_t max_speed)
{
    _max_speed = max_speed;
}

void StepperMotor::setHalfPitch(bool half_pitch)
{
    _half_pitch = half_pitch;
}

bool StepperMotor::getHalfPitch()
{
    return _half_pitch;
}
