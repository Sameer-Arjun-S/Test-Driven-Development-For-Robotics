/**
 * @file main.cpp
 * @author Driver: Sameer Arjun S (ssarjun@umd.edu); Navigator: Darshit Desai
 * @author Driver: Aaqib Barodawala (abarodaw@umd.edu); Navigator: Sai Teja Gilukara (saitejag@umd.edu) 
 * @brief This is the main.cpp file of shell-app
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <memory>

#include "../include/pid_controller.hpp"

int main() {
  /**
   * Create an instance for class pid_controller and call the compute method.
   */
  // Stores desired velocity, proportional, integral gain, differential gain and
  // the time step.
  double setVelocity, kp, ki, kd, dt;

  // Stores the user defined corresponding variables.
  std::cout << "Please enter the desired proportional, integral, differential "
               "gain and the time-step: ";
  std::cin >> kp >> ki >> kd >> dt;

  // Stores the desired velocity defined by the user
  std::cout << "\n Enter the desired velocity in m/s: ";
  std::cin >> setVelocity;

  // Create instance of class pid_controller
  std::shared_ptr<pid_controller> myPID;
  myPID = std::make_shared<pid_controller>(kp, ki, kd, dt);

  // Call compute method
  double new_velocity = myPID->compute(setVelocity, 4.0);

  // Display the computed velocity
  std::cout << "The new velocity is: " << new_velocity << " m/s" << std::endl;
  return 0;
}
