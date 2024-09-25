class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key = lambda item: (item[0], -item[1]))
        n = len(intervals)
        if not intervals:
            return 0
        cnt = 0
        end = intervals[0][1]
        for i in range(1, n):
            if intervals[i][0] < end:
                end = min(intervals[i][1], end)
                cnt += 1
            else:
                end = intervals[i][1]
        return cnt