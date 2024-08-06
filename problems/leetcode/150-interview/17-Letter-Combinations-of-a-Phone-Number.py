class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []
        mp= {'2':'abc','3':'def','4':'ghi','5':'jkl','6':'mno','7':'pqrs','8':'tuv','9':'wxyz'}
        ans=[]
        def rec(i,s):
            if i == len(digits):
                ans.append(s[:])
                return
            for e in mp[digits[i]]:
                rec(i+1,s+e)
        rec(0,"")
        return ans