class Solution:
    def minSwaps(self, nums: List[int]) -> int:
        n=len(nums)
        ones= sum(nums)
        if ones==0 or ones == n:
            return 0
        max_len=sum(nums[:ones])
        curr=max_len
        for i in range(n):
            curr -= nums[i]
            curr += nums[(i+ones)%n]
            max_len = max(max_len, curr)
        return ones-max_len