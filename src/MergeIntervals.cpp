#include <vector>
#include <algorithm>
#include "Interval.hpp"

std::vector<Interval> mergeTwoIntervals(Interval &a, Interval &b)
{
    if (a.start > b.end || a.end < b.start)
        return std::vector<Interval>{a, b};
    else    // overlapped
        return std::vector<Interval>{Interval(std::min(a.start, b.start), std::max(a.end, b.end))};
}

std::vector<Interval> mergeIntervals(std::vector<Interval>& intervals)
{
    if (intervals.empty())
        return std::vector<Interval>{};

    std::vector<Interval> ret;
    std::sort(intervals.begin(), intervals.end(), [](Interval a, Interval b) {
        return a.start < b.start;
    });
    ret.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {
        if (ret.back().end < intervals[i].start)
            ret.push_back(intervals[i]);
        else
            ret.back().end = std::max(ret.back().end, intervals[i].end);
    }

    return ret;
}
