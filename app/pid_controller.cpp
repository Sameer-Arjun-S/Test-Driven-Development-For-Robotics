/**
 * @file pid_controller.cpp
 * @author Driver: Sameer Arjun S (ssarjun@umd.edu); Navigator: Darshit Desai
 * (darshit@umd.edu)
 * @brief This is the class for the PID controller
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "../include/pid_controller.hpp"

#include <iostream>

/**
 * @brief Constructs pid_controller class instance with default provided values
 */
pid_controller::pid_controller() {
  Kp = 0.0;
  Ki = 0.0;
  Kd = 0.0;
  dt = 1.0;
}

/**
 * @brief Constructs the pid_controller object with taking inputs from user
 *
 * @Param1: Kp_input is the value of kp
 * @Param2: Kd_input is the value of kp
 * @Param3: Ki_input is the value of kp
 * @Param4: dt_input is the value of dt or sample time
 */
pid_controller::pid_controller(double Kp_input, double Ki_input,
                               double Kd_input, double dt_input) {
  // Assigning the inputs to the variables
  Kp = Kp_input;
  Ki = Ki_input;
  Kd = Kd_input;
  dt = dt_input;
  std::cout << "The inputs from the user are "
            << "Kp:" << Kp << " Kd:" << Kd << " Ki:" << Ki << " dt:" << dt
            << std::endl;
}

/**
 * @brief Calculates the velocity based on target and actual velocity
 *
 * @Param1 referece_vel is the target velocity of the system
 * @param2 current_vel is the current velocity of the system
 */
double pid_controller::compute(double reference_vel, double current_vel) {
  double velocityDifference = reference_vel - current_vel;
  // compute the velocity difference
  double calculatedVelocity = 0;
  if (dt > 0) {
    // compute the new velocity
    calculatedVelocity = (Kp * velocityDifference) +
                         (Ki * velocityDifference * dt) +
                         (Kd * velocityDifference / dt);
  } else {
    std::cout << "Time step has to be a non-negative value. "
                 "Output velocity set to 0.";
    calculatedVelocity = 0;
  }
  return calculatedVelocity;
}

/**
 * @brief Method to return dt
 */
double pid_controller::returndt() { return dt; }

/**
 * @brief Destructor for pid_controller class object
 */
pid_controller::~pid_controller() {}

