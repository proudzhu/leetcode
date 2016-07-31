#include <algorithm>
#include "CombinationSum4.hpp"

int combinationSum4(std::vector<int>& nums, int target)
{
    std::vector<int> result(target + 1, 0);
    result[0] = 1;
    for (int i = 1; i <= target; ++i) {
        for (int x : nums) {
            if (i >= x) {
                result[i] += result[i - x];
            }
        }
    }

    return result[target];
}
