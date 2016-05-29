#include "AdditiveNumber.hpp"
#include <iostream>
#include <algorithm> // std::reverse

std::string add(std::string n, std::string m)
{
    std::string res;
    int i = n.length() - 1, j = m.length() - 1, carry = 0;

    while(i >= 0 || j >= 0) {
        int sum = carry + (i >= 0 ? (n[i--] - '0') : 0) + (j >= 0 ? (m[j--] - '0') : 0);
        res.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    if(carry) res.push_back(carry + '0');
    std::reverse(res.begin(), res.end());
    return res;
}

bool check(int i, int j, std::string str)
{
    std::string a = str.substr(0, i);
    std::string b = str.substr(i, j - i);
    if ((a.length() > 1 && a[0] == '0') ||
        (b.length() > 1 && b[0] == '0'))
        return false;

    std::string c = add(a, b);

    if (c.length() > str.length() - j)
        return false;

    if (c == str.substr(j, c.length())) {
        if (j + c.length() == str.length())
            return true;
        else
            return check(j - i, j - i + c.length(), str.substr(i, str.length() - i));
    } else {
        return false;
    }
}

bool isAdditiveNumber(std::string num)
{
    for (int i = 1; i <= num.length() / 2; i++) {
        for (int j = i + 1; j <= (num.length() + i) / 2; j++) {
            if (check(i, j, num) == true)
                return true;
        }
    }

    return false;
}
