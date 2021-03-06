#include <fizzbuzz/base.h>

std::vector<std::string> fizzbuzz(uint32_t n) {
    std::vector<std::string> result;
    result.reserve(n);

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

        result.push_back(expected);
    }

    return result;
}
