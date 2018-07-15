#include "Catch/single_include/catch.hpp"

#include "RotateImage.hpp"

std::vector<std::vector<int>> test_in1 =
{
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

std::vector<std::vector<int>> test_out1 =
{
    {7, 4, 1},
    {8, 5, 2},
    {9, 6, 3}
};

std::vector<std::vector<int>> test_in2 =
{
    {5, 1, 9, 11},
    {2, 4, 8, 10},
    {13, 3, 6, 7},
    {15, 14, 12, 16}
};

std::vector<std::vector<int>> test_out2 =
{
    {15, 13, 2, 5},
    {14, 3, 4, 1},
    {12, 6, 8, 9},
    {16, 7, 10, 11}
};

bool compareMatrix(std::vector<std::vector<int>> &a, std::vector<std::vector<int>> &b)
{
    if (a.size() != b.size() || a[0].size() != b[0].size())
        return false;

    int m = a.size();
    int n = a[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != b[i][j])
                return false;
        }
    }

    return true;
}

TEST_CASE("RotateImage") {
    rotateImage(test_in1);
    rotateImage(test_in2);

	REQUIRE(compareMatrix(test_in1, test_out1) == true);
	REQUIRE(compareMatrix(test_in2, test_out2) == true);
}
