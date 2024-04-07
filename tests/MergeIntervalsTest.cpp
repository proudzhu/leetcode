#include <catch2/catch_test_macros.hpp>

#include "MergeIntervals.hpp"

bool compareInterval(Interval &a, Interval &b)
{
    return (a.start == b.start && a.end == b.end);
}

bool compareIntervalVector(std::vector<Interval> a, std::vector<Interval> b)
{
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); i++) {
        if (compareInterval(a[i], b[i]) == false)
            return false;
    }

    return true;
}

TEST_CASE("Merge Intervals") {
    std::vector<Interval> intervals{Interval(1,3), Interval(2,6), Interval(8,10), Interval(15,18)};
    std::vector<Interval> result{Interval(1,6), Interval(8,10), Interval(15,18)};

    REQUIRE(compareIntervalVector(mergeIntervals(intervals), result) == true);
}
