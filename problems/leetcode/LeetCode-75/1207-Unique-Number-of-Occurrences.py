class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        d = {}
        for i in range(len(arr)):
            if arr[i] in d:
                d[arr[i]] += 1
            else:
                d[arr[i]] = 1
        values = list(d.values())
        values.sort()
        for i in range(1,len(values)):
            if values[i] == values [i-1]:
                return False

        return True