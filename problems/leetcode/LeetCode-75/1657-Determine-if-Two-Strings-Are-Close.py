class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        n , m = len(word1) , len(word2)
        if n != m:
            return False

        for i in range(n):
            if word1[i] not in word2:
                return False
        
        d1 , d2 = {} , {}
        for i in range(n):
            if word1[i] in d1:
                d1[word1[i]] += 1
            else:
                d1[word1[i]] = 1
        
        for i in range(m):
            if word2[i] in d2:
                d2[word2[i]] += 1
            else:
                d2[word2[i]] = 1
        
        v1 , v2 = list(d1.values()) , list(d2.values())
        v1.sort()
        v2.sort()
        if len(v1) != len(v2):
            return False
        for i in range(len(v1)):
            if v1[i]!= v2[i]:
                return False
        return True