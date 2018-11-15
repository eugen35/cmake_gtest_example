#include <gtest/gtest.h>
#include "mylibs/foo.h"

TEST(SquareRootTest, PositiveNos1) {
    EXPECT_EQ (3, 3);
}

TEST(SquareRootTest, PositiveNos2) {
    EXPECT_EQ (3, 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}