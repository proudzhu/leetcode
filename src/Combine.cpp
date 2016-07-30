#include "Combine.hpp"

static int next_combine(std::vector<int> &comb, int n, int k)
{
    int i = k - 1;
    ++comb[i];
    while ((i > 0) && (comb[i] >= n - k + 1 + i)) {
        --i;
        ++comb[i];
    }

    if (comb[0] > n - k)
        return 0;

    for (i = i + 1; i < k; ++i)
        comb[i] = comb[i - 1] + 1;

    return 1;
}

std::vector<std::vector<int>> combine(int n, int k)
{
    std::vector<std::vector<int>> ret;
    std::vector<int> comb(k, 0);

    for (int i = 0; i < k; ++i)
        comb[i] = i;

    ret.push_back(comb);

    while (next_combine(comb, n, k))
        ret.push_back(comb);

    return ret;
}
