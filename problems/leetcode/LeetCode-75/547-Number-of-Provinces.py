class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        count, n = 0, len(isConnected)
        seen = []
        def dfs(node):
            for i in range(n):
                if isConnected[node][i] and i not in seen:
                    seen.append(i)
                    dfs(i)
        for i in range(n):
            if i not in seen:
                dfs(i)
                count+=1
        return count
        