class Solution:
    def dividePlayers(self, skill: List[int]) -> int:
        n = len(skill)
        skill.sort()
        l, r = 0, n-1
        ans, target = 0, skill[l]+skill[r]
        
        while l<r:
            if skill[l]+skill[r] != target:
                return -1
            ans += skill[l]*skill[r]
            l+=1
            r-=1
        return ans