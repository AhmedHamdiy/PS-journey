class Solution:
    def minHeightShelves(self, books: List[List[int]], shelfWidth: int) -> int:
        dp = [0]*(len(books)+1)
        dp[1] = books[0][1]

        for i in range(1,len(books)):
            height = books[i][1]
            dp[i+1] = books[i][1]+ dp[i]
            width = books[i][0]
            for j in range(i,0,-1):
                width+=books[j-1][0]
                if width>shelfWidth: break
                height = max(height,books[j-1][1])
                dp[i+1] = min(height+dp[j-1],dp[i+1])

        return dp[-1]
        