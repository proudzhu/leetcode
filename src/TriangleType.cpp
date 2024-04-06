#include <string>
#include <vector>
#include <cstdint>
#include "catch.hpp"

std::string triangleType(std::vector<int>& nums)
{
    if (nums[0] + nums[1] <= nums[2] ||
        nums[0] + nums[2] <= nums[1] ||
        nums[1] + nums[2] <= nums[0])
        return "none";

    if (nums[0] == nums[1] && nums[0] == nums[2])
        return "equilateral";

    if (nums[0] == nums[1] ||
        nums[0] == nums[2] ||
        nums[1] == nums[2])
        return "isosceles";

    return "scalene";
}

TEST_CASE("TriangleType") {
    std::vector<int> num1 = {3,3,3};
    REQUIRE(triangleType(num1) == "equilateral");

    std::vector<int> num2 = {3,4,5};
    REQUIRE(triangleType(num2) == "scalene");
}
