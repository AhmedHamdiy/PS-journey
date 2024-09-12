class Solution:
    def removeStars(self, s: str) -> str:
        st = []
        for i in range(len(s)):
            if s[i] == '*':
                st.pop()
            else:
                st+=[s[i]]
        
        return "".join(st)
