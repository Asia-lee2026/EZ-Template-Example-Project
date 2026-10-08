#pragma once

#include "EZ-Template/drive/drive.hpp"


inline ez::PID liftPID{0.45,0,0,0, "Lift1"};  // PID for lift, you can change the constants here or in the GUI
inline ez::PID liftPID2{0.45,0,0,0, "Lift2"};  // PID for lift, you can change the constants here or in the GUI

void set_lift(int input);

void lift_wait();

void lift_auto(int target);
