class Solution:
    def decodeString(self, s: str) -> str:
        st = []
        for char in s:
            if char != ']':
                st.append(char)
                continue
            
            s = \\
            while st and st[-1] != '[':
                s = st.pop() + s
            st.pop() 
            
            x = \\
            while st and st[-1].isdigit():
                x = st.pop() + x
            
            st.append(int(x) * s)
        
        return ''.join(st)