#include "routines/driver_comp.h"
//Does this show up on the thing
void driver_comp() {
  while (true) {
    driveFrontLeft.move(joystick.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y));
    driveFrontRight.move(joystick.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y));
    driveBackLeft.move(joystick.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y));
    driveBackRight.move(joystick.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y));

    if (joystick.get_digital(pros::E_CONTROLLER_DIGITAL_R1)){
      intakeLeft.move_velocity(100);
      intakeRight.move_velocity(100);
      barrelFrontLeft.move_velocity(100);
      barrelFrontRight.move_velocity(100);
      barrelBack.move_velocity(100);
    }else if (joystick.get_digital(pros::E_CONTROLLER_DIGITAL_R2)){
      intakeLeft.move_velocity(-100);
      intakeRight.move_velocity(-100);
      barrelFrontLeft.move_velocity(-100);
      barrelFrontRight.move_velocity(-100);
      barrelBack.move_velocity(-100) ;
    }else{
      intakeLeft.move_velocity(0);
      intakeRight.move_velocity(0);
      barrelFrontLeft.move_velocity(0);
      barrelFrontRight.move_velocity(0);
      barrelBack.move_velocity(0);
    }
  }
}
