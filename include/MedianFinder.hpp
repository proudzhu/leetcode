#ifndef _MEDIANFINDER_HPP
#define _MEDIANFINDER_HPP

#include <queue>

class MedianFinder {
public:
	// Add a number into the data structure
	void addNum(int num);

	// Returns the median of the current data stream
	double findMedian() ;
private:
	std::priority_queue<long> small, large;
};

#endif
