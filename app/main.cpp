#include <iostream>
#include "pid_controller.hpp"
#include <memory>

int main() {
  /**
   * Create an object for class pid_controller and calling compute method.
   */
  // stores values of the desired velocity and Kp
  double Initial_Vel, kp, ki, kd, dt;

  std::cout
      << "Enter the desired values Kp, Ki, Kd and dt: ";
  std::cin >> kp >> ki >> kd >> dt;
  //Assigning the inputs to the variables
  std::cout << "\n Enter desired velocity in m/s: ";
  std::cin >> Initial_Vel;  //Inputs desired velocity value

  // create object of class pid_controller
  std::shared_ptr<pid_controller> New_PID;
  New_PID = std::make_shared < pid_controller > (kp, ki, kd, dt);
  double Updated_Vel = New_PID->compute(Initial_Vel, 5.0);
  //Callinging the compute method to get the newly computed velocity value

  //Printing the updated velocity value
  std::cout << "The updated velocity of the system is: " << Updated_Vel << " m/s" << std::endl;
  
  return 0;
}
