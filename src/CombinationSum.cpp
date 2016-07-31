#include <algorithm>
#include "CombinationSum.hpp"

/* backtracking */
void combinationSumImpl(std::vector<std::vector<int>> &result, std::vector<int> &comb,
                         int begin, std::vector<int>& candidates, int target)
{
    if (target == 0) {
        result.push_back(comb);
        return;
    }

    for (int i = begin; i != candidates.size() && target >= candidates[i]; i++) {
        comb.push_back(candidates[i]);
        combinationSumImpl(result, comb, i, candidates, target - candidates[i]);
        comb.pop_back();
    }
}

std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target)
{
    std::vector<std::vector<int>> ret;
    std::vector<int> comb;

    std::sort(candidates.begin(), candidates.end());
    combinationSumImpl(ret, comb, 0, candidates, target);

    return ret;
}
