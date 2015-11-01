#include "FindDuplicate.hpp"

int findDuplicate(std::vector<int> &nums)
{
	int low = 0, high = nums.size() - 1;

	while (low < high) {
		int mid = low + (high - low) / 2;
		int cnt = 0;

		for (auto num : nums)
			if (num <= mid)
				++cnt;

		if (cnt <= mid)
			low = mid + 1;
		else
			high = mid;
	}

	return low;
}
