class Solution:
    def minimumPushes(self, word: str) -> int:
        arr = [0] * 26
        for char in word:
            arr[ord(char) - ord('a')] += 1
        sorted_counts = sorted(arr, reverse=True)
        
        ans = 0
        for i, count in enumerate(sorted_counts):
            if count == 0:
                break
            ans += (i // 8 + 1) * count
        
        return ans