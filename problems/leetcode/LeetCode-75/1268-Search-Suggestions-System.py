class Solution:
    def suggestedProducts(self, products: List[str], searchWord: str) -> List[List[str]]:
        products.sort()
        res, s = [], ''
        for c in searchWord:
            s += c
            i = bisect.bisect_left(products,s)
            res.append([w for w in products[i:i+3] if w.startswith(s)])
        return res
        