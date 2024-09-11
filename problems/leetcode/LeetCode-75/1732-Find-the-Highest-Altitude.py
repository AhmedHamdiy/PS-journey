class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        ans, s = 0, 0
        for i in range(len(gain)):
            s+=gain[i]
            ans=max(ans,s)
        return ans 
