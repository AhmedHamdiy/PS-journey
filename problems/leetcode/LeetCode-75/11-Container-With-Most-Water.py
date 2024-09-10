class Solution:
    def maxArea(self, height: List[int]) -> int:
        ans, l, r =0, 0,  len(height)-1
        while l<r:
            ans= max(ans,(r-l)*min(height[l],height[r]))
            if height[l]<height[r]:
                l+=1
            else:
                r-=1
        return ans 
