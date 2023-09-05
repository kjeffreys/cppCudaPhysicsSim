#include <gtest/gtest.h>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(DependencyCheck, GoogleTestAvailable) {
    ASSERT_TRUE(true);  // If this runs, Google Test is available
}