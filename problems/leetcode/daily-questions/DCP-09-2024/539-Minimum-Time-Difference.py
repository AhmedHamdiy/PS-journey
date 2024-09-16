class Solution:
    def findMinDifference(self, timePoints: List[str]) -> int:
        def toMinFromZero(t):
            return 60*int(t[:2]) + int(t[3:])
        
        maxMins = 60*24
        if len(timePoints) > maxMins:
            return 0
        ts = [toMinFromZero(t) for t in timePoints]
        ts.sort()
        
        diffMin = maxMins
        for i in range(1,len(ts)):
            t_high = ts[i]
            t_low = ts[i-1]
            diffMin = min(diffMin, t_high - t_low)
        diffMin = min(diffMin, (ts[0] - ts[-1]) % maxMins)
        
        return diffMin