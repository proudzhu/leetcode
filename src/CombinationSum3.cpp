#include "CombinationSum3.hpp"

#define MIN_CANDIDATE 1
#define MAX_CANDIDATE 9

void combinationSum3Impl(std::vector<std::vector<int>> &result, std::vector<int> &comb,
                         int begin, int k, int n)
{
    if (k == 0 && n == 0) {
        result.push_back(comb);
        return;
    }

    // the last candidate
    if (k == 1 && n >= begin && n <= MAX_CANDIDATE) {
        comb.push_back(n);
        result.push_back(comb);
        comb.pop_back();
        return;
    }

    /**
     * check
     * sum(begin, begin + k - 1) <= n
     * sum(MAX_CANDIDATE - k + 1, MAX_CANDIDATE) >= n
     */
    if ((MAX_CANDIDATE - k + 1 + MAX_CANDIDATE) * k / 2 < n)
        return;

    for (int i = begin; i <= MAX_CANDIDATE && (i + i + k - 1) * k / 2 <= n; i++) {
        comb.push_back(i);
        combinationSum3Impl(result, comb, i + 1, k - 1, n - i);
        comb.pop_back();
    }
}

std::vector<std::vector<int>> combinationSum3(int k, int n)
{
    std::vector<std::vector<int>> ret;
    std::vector<int> comb;

    combinationSum3Impl(ret, comb, MIN_CANDIDATE, k, n);

    return ret;
}
