//
// Created by Anders Arnholm on 2020-12-04.
//

#include <string>
#include <gtest/gtest.h>

const std::string tennis_score(int p1Score, int p2Score);

TEST(TennisTest, LoveAll_0_0) {
EXPECT_EQ("Love-All", tennis_score(0, 0));
}
