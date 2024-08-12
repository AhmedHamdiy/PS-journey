class KthLargest:

    def __init__(self, k: int, nums: List[int]):
        self.k = k
        self.data = nums
        heapq.heapify(self.data)
        while len(self.data) > k:
            heapq.heappop(self.data)

    def add(self, val: int) -> int:
        heapq.heappush(self.data, val)
        if len(self.data) > self.k:
            heapq.heappop(self.data)
        return self.data[0]

# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)