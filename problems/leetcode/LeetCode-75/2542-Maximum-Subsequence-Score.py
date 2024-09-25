class Solution:
    def maxScore(self, nums1: List[int], nums2: List[int], k: int) -> int:
        res = 0
        s = 0
        pq = []

        merged = [(nums2[i], nums1[i]) for i in range(len(nums1))]
        merged.sort(reverse=True)

        for x, y in merged:
            if len(pq) == k:
                s -= heapq.heappop(pq)

            s += y
            heapq.heappush(pq, y)

            if len(pq) == k:
                res = max(res, s * x)

        return res