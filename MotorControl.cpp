#include "MotorControl.h"

void MotorControl::begin(uint8_t pinPWM, uint8_t pinDIR)
{
    _pinPWM = pinPWM;
    _pinDIR = pinDIR;
    pinMode(_pinPWM, OUTPUT);
    pinMode(_pinDIR, OUTPUT);
}

void MotorControl::setSpeed(int speed)
{
    speed = constrain(speed, 0, 255); // Garante valor entre 0 e 255
    analogWrite(_pinPWM, speed);
}

void MotorControl::setDirection(bool forward)
{
    digitalWrite(_pinDIR, forward ? HIGH : LOW);
}