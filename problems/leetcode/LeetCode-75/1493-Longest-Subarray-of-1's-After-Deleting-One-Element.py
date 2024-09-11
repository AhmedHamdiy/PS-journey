class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        l, ans, zeros = 0 , 0 , 0
        for r in range(len(nums)):
            if nums[r] == 0:
                zeros+=1
            while zeros > 1:
                if nums[l] == 0:
                    zeros-=1
                l+=1
            ans= max(ans,r-l+1-zeros)
        return ans if ans<len(nums) else ans-1
