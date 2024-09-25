class Solution:
    def totalCost(self, costs, k, candidates):
        l = 0
        r = len(costs) - 1
        pq1 = []
        pq2 = []

        ans = 0
        while k > 0:
            while len(pq1) < candidates and l <= r:
                heapq.heappush(pq1, costs[l])
                l += 1
            while len(pq2) < candidates and l <= r:
                heapq.heappush(pq2, costs[r])
                r -= 1

            x = pq1[0] if pq1 else float('inf')
            y = pq2[0] if pq2 else float('inf')

            if x <= y:
                ans += x
                heapq.heappop(pq1)
            else:
                ans += y
                heapq.heappop(pq2)

            k -= 1
        return ans