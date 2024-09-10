class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        s=0
        for i in range(k):
            s+=nums[i]
        l, ans =0, s/k 
        for i in range(k,len(nums)):
            s+=(nums[i]-nums[l])
            ans=max(ans,s/k)
            l+=1
        return ans
