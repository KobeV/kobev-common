#include <assert.h>
#include <gmock/gmock.h>
#include <iostream>
#include "util/inc/ILogger.hpp"

using namespace ::testing;

class TestClass : public ::testing::Test
{
};

TEST_F(TestClass, SimpleTest) {}
int main(int argc, char** argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
