#include <gtest/gtest.h>

#include "lib.hpp"

#include "pid_controller.hpp"

void function_not_used() {
  dummy();
  int notUsed = my_function1(3);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
