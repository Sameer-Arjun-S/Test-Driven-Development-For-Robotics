/**
 * @file main.cpp
 * @author Driver: Sameer Arjun S (ssarjun@umd.edu); Navigator: Darshit Desai
 * @author Driver: Aaqib Barodawala (abarodaw@umd.edu); Navigator: Sai Teja Gilukara (saitejag@umd.edu) 
 * @brief This is the main.cpp file of test
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <gtest/gtest.h>
#include "../include/pid_controller.hpp"


int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
