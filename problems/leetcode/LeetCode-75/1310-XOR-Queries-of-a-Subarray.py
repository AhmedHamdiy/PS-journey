class Solution:
    def xorQueries(self, arr: List[int], queries: List[List[int]]) -> List[int]:
        n = len(arr)
        xor, ans= [0]*n, []
        xor[0]=arr[0]
        for i in range(1,n):
            xor[i]=xor[i-1] ^ arr[i]
        for l,r in queries:
            ans.append(xor[r]^(xor[l-1] if l>0 else 0))
        return ans
        