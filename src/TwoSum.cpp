#include <unordered_map>
#include "TwoSum.hpp"

std::vector<int> twoSum(std::vector<int> &numbers, int target)
{
	// Key is the number and value is its index in the vector
	std::unordered_map<int, int> hash;
	std::vector<int> result;

	for (int i = 0; i < numbers.size(); ++i) {
		int numberToFind = target - numbers[i];

		// if numToFind is found in map, return them
		if (hash.find(numberToFind) != hash.end()) {
			// +1 because idices are NOT zero based
			result.push_back(hash[numberToFind] + 1);
			result.push_back(i + 1);
			return result;
		}

		// number not found, put it in the map
		hash[numbers[i]] = i;
	}

	return result;
}
