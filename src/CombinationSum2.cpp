#include <algorithm>
#include "CombinationSum2.hpp"

/* backtracking */
void combinationSum2Impl(std::vector<std::vector<int>> &result, std::vector<int> &comb,
                         int begin, std::vector<int>& candidates, int target)
{
    if (target == 0) {
        result.push_back(comb);
        return;
    }

    for (int i = begin; i != candidates.size() && target >= candidates[i]; i++) {
        if (i == begin || candidates[i] != candidates[i - 1]) {
            comb.push_back(candidates[i]);
            combinationSum2Impl(result, comb, i + 1, candidates, target - candidates[i]);
            comb.pop_back();
        }
    }
}

std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target)
{
    std::vector<std::vector<int>> ret;
    std::vector<int> comb;

    std::sort(candidates.begin(), candidates.end());
    combinationSum2Impl(ret, comb, 0, candidates, target);

    return ret;
}
