from collections import deque

class Solution:
    def predictPartyVictory(self, senate: str) -> str:
        r_q = deque()
        d_q = deque()
        
        for i, c in enumerate(senate):
            if c == 'R':
                r_q.append(i)
            else:
                d_q.append(i)
        
        while r_q and d_q:
            r_i = r_q.popleft()
            d_i = d_q.popleft()
            
            if r_i < d_i:
                r_q.append(r_i + len(senate))
            else:
                d_q.append(d_i + len(senate))
        
        return \Radiant\ if r_q else \Dire\