#include "routines/driver_comp.h"

void driver_comp() {
  while (true) {
    driveFrontLeft.move(joystick.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y));
    driveFrontRight.move(joystick.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y));
    driveBackLeft.move(joystick.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y));
    driveBackRight.move(joystick.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y));
  }
}
