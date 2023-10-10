/**
 * @file test.cpp
 * @author Driver: Sameer Arjun S (ssarjun@umd.edu); Navigator: Darshit Desai
 * (darshit@umd.edu)
 * @brief This is used to test the cases of PID controller
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <gtest/gtest.h>
#include <math.h>
#include <stdio.h>
#include <memory>
#include "../include/pid_controller.hpp"


/**
 *@brief Test for a proportional controller
 */
TEST(PIDTest, test_compute_kp) {
  pid_controller control(2, 0, 0, 0.1);
  EXPECT_NEAR(control.compute(5.0, 7.0), -4.0, 0.0001);
}

/**
 *@brief This tests if dt is a value of 0 or not
 */
TEST(PIDTest, test_dt) {
  pid_controller control;
  EXPECT_GT(control.returndt(), 0);
}
