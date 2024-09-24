class Solution(object):
    def longestCommonPrefix(self, arr1, arr2):
        st = set()
        s1 = set(arr1)
        s2 = set(arr2)

        for val in s2:
            cur = ""
            s = str(val)
            for c in s:
                cur += c
                if int(cur) not in st:
                    st.add(int(cur))

        ans = 0
        for x in s1:
            cur = ""
            s = str(x)
            for c in s:
                cur += c
                if int(cur) in st:
                    ans = max(ans, len(cur))
        return ans