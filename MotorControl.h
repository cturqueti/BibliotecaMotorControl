#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

#include <Arduino.h> // Se for usar funções do Arduino (digitalWrite, etc.)

class MotorControl
{
public:
    void begin(uint8_t pinPWM, uint8_t pinDIR); // Inicializa os pinos
    void setSpeed(int speed);                   // Controla velocidade (0-255)
    void setDirection(bool forward);            // Define direção
private:
    uint8_t _pinPWM, _pinDIR;
};

#endif