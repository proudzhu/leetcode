#include "Catch/single_include/catch.hpp"

#include "MedianFinder.hpp"

#define maxRelativeError 0.00001

#define isEqual(a, b) (fabs((a) - (b)) / (b) < maxRelativeError)

TEST_CASE("MedianFinder") {
	SECTION("up") {
		MedianFinder mf;
		mf.addNum(1);
		REQUIRE(isEqual(mf.findMedian(), 1.0));
		mf.addNum(2);
		REQUIRE(isEqual(mf.findMedian(), 1.5));
		mf.addNum(3);
		REQUIRE(isEqual(mf.findMedian(), 2.0));
	}

	SECTION("down") {
		MedianFinder mf;
		mf.addNum(-1);
		REQUIRE(isEqual(mf.findMedian(), -1.0));
		mf.addNum(-2);
		REQUIRE(isEqual(mf.findMedian(), -1.5));
		mf.addNum(-3);
		REQUIRE(isEqual(mf.findMedian(), -2.0));
	}
}
