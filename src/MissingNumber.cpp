#include "MissingNumber.hpp"

/*
 * we could just treat this problem as
 * all numbers exist twice except one
 * find this single number
 */
int missingNumber(std::vector<int> &nums)
{
	int n = nums.size();
	int result = 0;

	for (int i = 0; i < n; i++) {
		result ^= i;
		result ^= nums[i];
	}

	return (result ^ n);
}

/*
 * binary finder
 */
int missingSortedNumber(std::vector<int> &nums)
{
	int n = nums.size();
	int start = 0, end = n;
	while (start < end) {
		int mid = start + (end - start) / 2;
		if (nums[mid] <= mid)
			start = mid + 1;
		else
			end = mid;
	}

	return start;
}
