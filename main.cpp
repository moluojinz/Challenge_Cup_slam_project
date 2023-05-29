
#include "Init/motor.h"
#include "Init/main.h"

#define TIME_STEP 32
// All the webots classes are defined in the "webots" namespace
using namespace webots;

//Robot
webots::Robot *robot;
//Motor
webots::Motor *lfMotor;
webots::Motor *lbMotor;
webots::Motor *rfMotor;
webots::Motor *rbMotor;
//Camera
webots::Camera *cam_f;
webots::Camera *cam_b;
webots::RangeFinder *dep_f;
webots::RangeFinder *dep_b;
void Robot_Init(){
    // create the Robot instance.
    robot = new Robot();
    // 读取电机设备
    lfMotor = robot->getMotor("lf_motor");
    lbMotor = robot->getMotor("lb_motor");
    rfMotor = robot->getMotor("rf_motor");
    rbMotor = robot->getMotor("rb_motor");
    //初始化速度
    lfMotor->setPosition(INFINITY);
    lbMotor->setPosition(INFINITY);
    rfMotor->setPosition(INFINITY);
    rbMotor->setPosition(INFINITY);
    lfMotor->setVelocity(0.0);
    lbMotor->setVelocity(0.0);
    rfMotor->setVelocity(0.0);
    rbMotor->setVelocity(0.0);
    // Camera
    cam_f=robot->getCamera("cam_f");
    cam_f->enable(TIME_STEP);
    cam_b=robot->getCamera("cam_b");
    cam_b->enable(TIME_STEP);
    //  ranger_finder
    dep_b=robot->getRangeFinder("depth_f");
    dep_b->enable(TIME_STEP);
    dep_f=robot->getRangeFinder("depth_b");
    dep_f->enable(TIME_STEP);
}


int main(int argc, char **argv) {
    //Init
    Robot_Init();
    motor_SetSpeed();

    while (robot->step(TIME_STEP) != -1)
    {

    }


    delete robot;
    return 0;
}
