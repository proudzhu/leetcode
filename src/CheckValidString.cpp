#include <string>
#include <catch2/catch_test_macros.hpp>

bool checkValidString(std::string s)
{
    int leftMin = 0, leftMax = 0;

    for (char c : s) {
        if (c == '(') {
            leftMin++;
            leftMax++;
        } else if (c == ')') {
            leftMin--;
            leftMax--;
        } else {
            leftMin--;
            leftMax++;
        }
        if (leftMax < 0) return false;
        if (leftMin < 0) leftMin = 0;
    }

    return leftMin == 0;
}

TEST_CASE("CheckValidString") {
	REQUIRE(checkValidString("()") == true);
    REQUIRE(checkValidString("(*)") == true);
    REQUIRE(checkValidString("(*))") == true);
}
