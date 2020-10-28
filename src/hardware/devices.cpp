#include "hardware/devices.h"

using namespace pros;


Motor driveFrontLeft(PORT_DRIVE_FRONT_LEFT);
Motor driveFrontRight(PORT_DRIVE_FRONT_RIGHT, true);
Motor driveBackLeft(PORT_DRIVE_BACK_LEFT);
Motor driveBackRight(PORT_DRIVE_BACK_RIGHT, true);

Motor intakeRight(PORT_INTAKE_RIGHT, true);
Motor intakeLeft(PORT_INTAKE_LEFT);

Motor barrelFrontLeft(PORT_BARREL_FRONT_LEFT, true);
Motor barrelFrontRight(PORT_BARREL_FRONT_RIGHT);
Motor barrelBack(PORT_BARREL_BACK, true);




Controller joystick(E_CONTROLLER_MASTER);

// Motor drive_arr[] = {driveFrontLeft, driveFrontRight, driveBackLeft, driveBackRight};
// Motor intake_arr[] = {intakeLeft, intakeRight};
