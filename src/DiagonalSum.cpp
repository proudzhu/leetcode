#include "DiagonalSum.hpp"
#include <cstdint>

int diagonalSum(std::vector<std::vector<int>>& mat)
{
    int N = mat.size();
    int sum = 0;

    for (uint32_t i = 0; i < N; i++) {
        sum += mat[i][i];
        if (i * 2 != N - 1) {
            sum += mat[i][N - 1 - i];
        }
    }

    return sum;
}
