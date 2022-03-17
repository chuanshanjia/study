#include "gtest/gtest.h"
#include "example/code/main.h"

TEST(MainTest, get_greet) {
  EXPECT_EQ(get_greet("World"), "Hello World");
}