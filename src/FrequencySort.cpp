#include "FrequencySort.hpp"
#include <unordered_map>

std::vector<int> frequencySort(std::vector<int>& nums)
{
    std::unordered_map<int, int> m;

    for (auto i: nums) {
        m[i] += 1;
    }

    sort(begin(nums), end(nums), [&](int a, int b) {
        return m[a] == m[b] ? a > b : m[a] < m[b];
    });

    return nums;
}
