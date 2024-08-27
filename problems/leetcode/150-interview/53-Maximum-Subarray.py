class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        cur,ans = 0,-inf
        for num in nums:
            cur = max(num,num+cur)
            ans=max(ans,cur)
        return ans