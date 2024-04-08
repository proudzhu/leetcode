#include <vector>
#include <catch2/catch_test_macros.hpp>

int countStudents(std::vector<int>& students, std::vector<int>& sandwiches)
{
    int rank[2] = {0, 0};

    for (auto i: students) {
        rank[i] += 1;
    }

    for (auto s: sandwiches) {
        if (!rank[s]--)
            return rank[1 - s];
    }

    return 0;
}

TEST_CASE("CountStudents") {
    std::vector<int> stu1 = {1,1,0,0};
    std::vector<int> sand1 = {0,1,0,1};
	REQUIRE(countStudents(stu1, sand1) == 0);

    std::vector<int> stu2 = {1,1,1,0,0,1};
    std::vector<int> sand2 = {1,0,0,0,1,1};
    REQUIRE(countStudents(stu2, sand2) == 3);
}
