class Solution:
    def secondMinimum(self, n: int, edges: List[List[int]], time: int, change: int) -> int:
        g = [[] for _ in range(n + 1)]
        for u, v in edges:
            g[u].append(v)
            g[v].append(u)
        
        d = [[float("inf"), float("inf")] for _ in range(n + 1)]
        pq = [(0, 1)]
        while pq:
            t1, u1 = heapq.heappop(pq)
            if u1 == n and d[u1][1] != float("inf"): return d[u1][1]
            t = time
            if (t1 // change) % 2 == 1: t += (t1 // change + 1) * change - t1
            for u2 in g[u1]:
                if t1 + t < d[u2][0]:
                    d[u2][0], d[u2][1] = t1 + t, d[u2][0]
                    heapq.heappush(pq, (t1 + t, u2))
                if d[u2][0] < t1 + t < d[u2][1]:
                    d[u2][1] = t1 + t
                    heapq.heappush(pq, (t1 + t, u2))

        return -1