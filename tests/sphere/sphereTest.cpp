#include "gtest/gtest.h"
#include "foo.h"

TEST(SphereVolumeTest, PositiveRadius) {
    EXPECT_NEAR(foo::sphere::vol(1.0), 4.18879020479, 1e-8);
    EXPECT_NEAR(foo::sphere::vol(5.0), 523.598775598, 1e-8);
}

TEST(SphereVolumeTest, ZeroOrNegativeRadius) {
    EXPECT_THROW(foo::sphere::vol(0), std::invalid_argument);
    EXPECT_THROW(foo::sphere::vol(-1), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
