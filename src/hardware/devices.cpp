#include "hardware/devices.h"

using namespace pros;


Motor driveFrontLeft(PORT_DRIVE_FRONT_LEFT);
Motor driveFrontRight(PORT_DRIVE_FRONT_RIGHT, true);
//Motor driveCenterLeft(PORT_DRIVE_CENTER_LEFT);
//Motor driveCenterRight(PORT_DRIVE_CENTER_RIGHT);
Motor driveBackLeft(PORT_DRIVE_BACK_LEFT);
Motor driveBackRight(PORT_DRIVE_BACK_RIGHT, true);

Controller joystick(E_CONTROLLER_MASTER);

// Motor drive_arr[] = {driveFrontLeft, driveFrontRight, driveBackLeft, driveBackRight};
// Motor intake_arr[] = {intakeLeft, intakeRight};
