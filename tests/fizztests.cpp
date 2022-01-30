#include <gtest/gtest.h>
#include <fizzbuzz/base.h>

TEST(FizzBuzz, CorrectUpTo15) {
    std::vector<std::string> result = fizzbuzz(15);

    ASSERT_EQ(15, result.size());

    for (uint8_t i = 1; i <= 15; i++) {
        std::string expected;
        if (i % 15 == 0) {
            expected = "fizz buzz";
        } else if (i % 5 == 0) {
            expected = "buzz";
        } else if (i % 3 == 0) {
            expected = "fizz";
        } else {
            expected = std::to_string(i);
        }

        std::string actual = result[i - 1];

        EXPECT_EQ(expected, actual);
    }
}
