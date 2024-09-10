class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        ans, rem, l= 0, 0, 0
        for r in range(len(nums)):
            if nums[r] == 0:
                rem+=1
            while rem > k:
                if nums[l]==0:
                    rem-=1
                l+=1
            ans = max(ans,r-l+1)
        return ans
        