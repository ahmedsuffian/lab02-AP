#include <limits.h>
#include "mycode.h"
#include "gtest/gtest.h"

TEST(AddTest2, Blah) {
  EXPECT_EQ(add(3,4), 7);
}


TEST(AddTest, Blah) {
  EXPECT_EQ( add(2,3), 5);
}

TEST(XYZTesT, Random) {

  EXPECT_EQ( add(2,1), 3);
}
