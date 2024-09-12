class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        ans=0
        for i in range(len(words)):
            cnt = 0
            for j in range(len(words[i])):
                if words[i][j] in allowed:
                    cnt+=1 
            ans = ans+1 if cnt==len(words[i]) else ans

        return ans 