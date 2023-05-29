//
// Created by ShiF on 2023/5/29.
//

#ifndef MYCONTROLLER_MAIN_H
#define MYCONTROLLER_MAIN_H

#include "webots/camera.hpp"
#include "webots/RangeFinder.hpp"
#include "webots/supervisor.hpp"
#include <webots/Robot.hpp>
#include <webots/Motor.hpp>
#include "algorithm_headfile.h"

void Robot_Init();

extern webots::Robot *robot;
extern webots::Motor *lfMotor;
extern webots::Motor *lbMotor;
extern webots::Motor *rfMotor;
extern webots::Motor *rbMotor;


#endif //MYCONTROLLER_MAIN_H
