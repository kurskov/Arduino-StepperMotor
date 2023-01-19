/*
    Stepper motor
    
    Author: Dmitrii Kurskov <dmitrii@kurskov.ru>
    GitHub: https://github.com/kurskov/Arduino-StepperMotor
    Version: 1.0.0
    MIT license
*/

#ifndef _DK_StepperMotor_h
#define _DK_StepperMotor_h

#if defined(ARDUINO) && ARDUINO >= 100
    #include <Arduino.h>
#else
    #include <WProgram.h>
#endif

class StepperMotor {
    public:
        StepperMotor();


    private:

};

#endif // _DK_StepperMotor_h
