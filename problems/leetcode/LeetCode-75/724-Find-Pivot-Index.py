class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        n = len(nums) 
        if n == 1:
            return 0
        s,tot = 0, sum(nums)
        for i in range(n):
            if s+nums[i] == tot-s:
                return i
            s+=nums[i]
        return -1
