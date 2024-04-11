#include <string>
#include <deque>
#include <catch2/catch_test_macros.hpp>

std::string removeKdigits(std::string num, int k) {
    std::deque<char> stack;
        
    for (char digit : num) {
        while (!stack.empty() && k > 0 && stack.back() > digit) {
            stack.pop_back();
            k--;
        }
        stack.push_back(digit);
    }
        
    // Construct the resulting string from the stack
    std::string result = std::string(stack.begin(), stack.end() - k);
        
    // Remove leading zeros
    size_t pos = result.find_first_not_of('0');
    result = (pos == std::string::npos) ? "0" : result.substr(pos);
        
    return result;
}

TEST_CASE("RemoveKdigits") {
	REQUIRE(removeKdigits("1432219", 3) == "1219");
    REQUIRE(removeKdigits("10200", 1) == "200");
    REQUIRE(removeKdigits("10", 2) == "0");
}
