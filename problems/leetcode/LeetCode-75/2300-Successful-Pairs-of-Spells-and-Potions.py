class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        arr = [math.ceil(success / potion) for potion in potions]
        arr.sort()

        res = []
        for spell in spells:
            l, r, ans = 0, len(arr) - 1, 0
            while l <= r:
                mid = (l + r) // 2
                if arr[mid] <= spell:
                    l = mid + 1
                    ans = l
                else:
                    r = mid - 1
            res.append(ans)

        return res