class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        total,cur1,cur2,mx,mn=0,0,0,-inf,inf
        for num in nums:
            total+=num
            cur1+=num
            cur2+=num
            mx=max(mx,cur1)
            cur1=max(0,cur1)
            mn=min(mn,cur2)
            cur2=min(0,cur2)
        return max(mx,total-mn) if total>mn else mx