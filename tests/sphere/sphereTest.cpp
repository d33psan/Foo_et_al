//Unit tests for the sphere calculations.
#include "gtest/gtest.h" // Include the Google Test framework
#include "foo.h"

// Test case to verify the volume calculation for positive radius values
TEST(SphereVolumeTest, PositiveRadius) {
    EXPECT_NEAR(foo::sphere::vol(1.0), 4.18879020479, 1e-8);
    EXPECT_NEAR(foo::sphere::vol(5.0), 523.598775598, 1e-8);
}
// Test case to verify that an exception is thrown for zero or negative radius values
TEST(SphereVolumeTest, ZeroOrNegativeRadius) {
    EXPECT_THROW(foo::sphere::vol(0), std::invalid_argument);
    EXPECT_THROW(foo::sphere::vol(-1), std::invalid_argument);
}
// Main function to run all tests
int main(int argc, char **argv) {
    // Initialize Google Test
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
