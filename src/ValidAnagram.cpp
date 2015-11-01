#include "ValidAnagram.hpp"

bool isAnagram(std::string s, std::string t)
{
	if (s.length() != t.length())
		return false;
	int n = s.length();
	int counts[26] = {0};

	for (int i = 0; i < n; i++) {
		counts[s[i] - 'a']++;
		counts[t[i] - 'a']--;
	}

	for (int i = 0; i < 26; i++)
		if (counts[i])
			return false;

	return true;
}
