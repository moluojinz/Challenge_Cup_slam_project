//
// Created by ShiF on 2023/5/29.
//
#include "motor.h"
#include "main.h"

void motor_SetSpeed(void)
{

    // 设定电机目标位置
    lfMotor->setVelocity(2.0);
    lbMotor->setVelocity(2.0);
    rfMotor->setVelocity(2.0);
    rbMotor->setVelocity(2.0);
}