class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort()
        ans, st, nd =0, points[0][0],points[0][1]
        for i in range(len(points)):
            if points[i][0]<=nd:
                st = max(st,points[i][0])
                nd = min(points[i][1],nd)
            else:
                ans += 1
                st = points[i][0]
                nd = points[i][1]
        ans += 1
        return ans

            