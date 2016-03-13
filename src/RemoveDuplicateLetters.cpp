#include "RemoveDuplicateLetters.hpp"
#include <vector>

std::string removeDuplicateLetters(std::string s)
{
    std::vector<int> cand(256, 0);
    std::vector<bool> visited(256, false);

    for (char c : s)
        cand[c]++;

    std::string result = "0";

	for (char c : s) {
        cand[c]--;
        if (visited[c]) continue;
        while (c < result.back() && cand[result.back()]) {
            visited[result.back()] = false;
            result.pop_back();
        }
        result += c;
        visited[c] = true;
    }

    return result.substr(1);
}
