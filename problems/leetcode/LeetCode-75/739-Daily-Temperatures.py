class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        n = len(temperatures)
        res = [0] * n
        st = []
        for i in range(n):
            while st and temperatures[i] > temperatures[st[-1]]:
                t = st[-1]
                st.pop()
                res[t] = i - t

            st.append(i)
        return res