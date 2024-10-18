#include <iostream>
#include <gtest/gtest.h>

#include "utils.h"

TEST(AddTogetherTest, TestingFunction) {
  EXPECT_EQ(3, Utils::AddTogether<int>(1, 2));
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}