#include "CalculateMinimumHP.hpp"
#include <climits>
/*
 * DP problem
 */
int calculateMinimumHP(std::vector<std::vector<int>>& dungeon)
{
    int m = dungeon.size();
    int n = dungeon[0].size();

    std::vector<std::vector<int> > hp(m + 1, std::vector<int>(n + 1, INT_MAX));
    hp[m][n - 1] = 1;
    hp[m - 1][n] = 1;
    for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            int need = std::min(hp[i + 1][j], hp[i][j + 1]) - dungeon[i][j];
            hp[i][j] = need <= 0 ? 1 : need;
        }
    }
    return hp[0][0];
}
