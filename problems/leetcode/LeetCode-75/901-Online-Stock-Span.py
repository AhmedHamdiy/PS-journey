class StockSpanner:

    def __init__(self):
        self.stack = []
        
    def next(self, price: int) -> int:
        ans = 1
        span = 0
        while self.stack and price >= self.stack[-1][0]:
            value, span = self.stack.pop()
            ans += span
        self.stack.append((price, ans))
        return ans



# Your StockSpanner object will be instantiated and called as such:
# obj = StockSpanner()
# param_1 = obj.next(price)