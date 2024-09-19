class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        c1, c2 = Counter(s1.split()), Counter(s2.split())
        return [k for k in (c1 | c2).keys() if {c1[k], c2[k]} == {0, 1}]