class SmallestInfiniteSet:
    def __init__(self):
        self.heap = [i for i in range(1,1001)]
        heapq.heapify(self.heap)
        self.d = Counter(self.heap)

    def popSmallest(self) -> int:
        val = heapq.heappop(self.heap)
        self.d[val] = 0
        return val        
    
    def addBack(self, num: int) -> None:
        if num not in self.d or not self.d[num]:
            heapq.heappush(self.heap,num)
            self.d[num] = 1

# # Your SmallestInfiniteSet object will be instantiated and called as such:
# # obj = SmallestInfiniteSet()
# # param_1 = obj.popSmallest()
# # obj.addBack(num)