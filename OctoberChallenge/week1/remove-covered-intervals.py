class Solution(object):
    def removeCoveredIntervals(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: int
        """
        intervals.sort(key=lambda x: (x[0], -x[1])); #O(n)
        print(intervals)

        num = 0;
        b_max = 0;

        for (a, b) in intervals: #(On)
            if b_max < b:
                b_max = b;
            else:
                num += 1;

        return len(intervals) - num;
