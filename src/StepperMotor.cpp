/*
    See StepperMotor.h for all information.
    Author: Dmitrii Kurskov <dmitrii@kurskov.ru>
*/

#include "StepperMotor.h"


// Constructors

StepperMotor::StepperMotor(uint16_t steps; uint8_t step_pin; uint8_t dir_pin; uint8_t enable_pin = 0)
{
    _steps = steps;
    _step_pin = step_pin;
    _der_pin = dir_pin;
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
