#include "WordPattern.hpp"
#include <map>
#include <sstream>

bool wordPattern(std::string pattern, std::string str)
{
	std::map<char, int> p2i;
	std::map<std::string, int> w2i;
	std::istringstream in(str);
	int i = 0, n = pattern.size();

	for (std::string word; in >> word; ++i) {
		if (i == n || p2i[pattern[i]] != w2i[word])
			return false;
		p2i[pattern[i]] = w2i[word] = i + 1;
	}

	return i == n;
}
