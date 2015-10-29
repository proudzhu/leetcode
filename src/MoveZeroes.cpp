#include "MoveZeroes.hpp"

#include <algorithm>
#include <iostream>

void print_vector(std::vector<int> nums) {
	for (auto x : nums)
		std::cout << x << ", ";
	std::cout << std::endl;
}

void moveZeroes(std::vector<int> &nums) {
	int n = nums.size();
	int i = 0, j = 0;
	while (i < n && j < n) {
		while (nums[i] != 0)
			i++;
		j = i + 1;
		while (nums[j] == 0)
			j++;

		if (i < n && j < n)
			std::swap(nums[i], nums[j]);

		i++;
		j++;

		//print_vector(nums);
	}
}
