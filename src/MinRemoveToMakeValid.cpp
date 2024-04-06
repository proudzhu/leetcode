#include "MinRemoveToMakeValid.hpp"
#include <stack>

std::string minRemoveToMakeValid(std::string s)
{
    std::stack<uint32_t> k;

    // mark
    for (uint32_t i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            k.push(i);
        } else if (s[i] == ')') {
            if (!k.empty()) {
                k.pop();
            } else {
                s[i] = '*';
            }
        }
    }

    while (!k.empty()) {
        uint32_t i = k.top();
        s[i] = '*';
        k.pop();
    }

    std::erase_if(s, [](char x) { return x == '*'; });

    return s;
}
