class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        cnt = 0
        vowels = ['a','e','i','o','u']
        for i in range(k):
            if(vowels.count(s[i])):
                cnt+=1
        ans = cnt
        for i in range(k,len(s)):
            if(vowels.count(s[i])):
                cnt+=1
            if(vowels.count(s[i-k])):
                cnt-=1
            ans = max(ans,cnt)
        return ans
        
