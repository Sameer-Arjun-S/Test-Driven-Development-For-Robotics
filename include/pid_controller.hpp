/**
 * @file pid_controller.hpp
 * @author Driver: Sameer Arjun S (ssarjun@umd.edu); Navigator: Darshit Desai
 * (darshit@umd.edu)
 * @brief Implementation of PID controller
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef INCLUDE_PID_CONTROLLER_HPP_
#define INCLUDE_PID_CONTROLLER_HPP_

#include <iostream>

/**
 * @brief PID Controller Class, initialization of gain values and sampling time
 * @param1 Kp is the proportional gain constant
 * @param1 Kd is the derivative gain constant
 * @param1 Ki is the integral gain constant
 * @param1 dt is the sampling time
 */
class pid_controller {
 private:
  double Kp = 1.0;
  double Kd = 0.5;
  double Ki = 0.3;
  double dt = 0.4;

 public:
  /**
   * @brief Class constructor to initialize with default values
   */
  pid_controller();
  /**
   * @brief Constructor to initialize  with user defined values
   *
   * @param1 Kp is the proportional gain
   * @param1 Kd is the derivative gain
   * @param1 Ki is the integral gain
   * @param1 dt is the sampling time
   *
   */
  pid_controller(double Kp, double Ki, double Kd, double dt);
  /**
   * @brief This method computes the new velocity using current and reference
   * velocities
   *
   * @Param1 referece_vel is the target velocity of the system
   * @param2 current_vel is the current velocity
   */
  double compute(double reference_vel, double current_vel);
  /**
   * @brief This returns the sampling time dt
   */
  double returndt();

  ~pid_controller();
};

#endif  // INCLUDE_PID_CONTROLLER_HPP_