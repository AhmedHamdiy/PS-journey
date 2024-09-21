class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l, r = 1, max(piles)
        def f(mid,piles,h):
            cnt = 0
            for pile in piles:
                cnt += (pile + mid - 1) //mid
            return cnt <= h


        while l < r:
            mid = (l+r )//2
            if f(mid,piles,h):
                r = mid
            else:
                l = mid+1
        return l