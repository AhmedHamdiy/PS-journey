class Solution:
    def minReorder(self, n: int, connections: List[List[int]]) -> int:
        cnt= 0
        adj = defaultdict(list)
        for c in connections:
            adj[c[0]].append(c)
            adj[c[1]].append(c)
        curr = seen = {0}
        while curr:
            new = set()
            for v in curr:
                for e in adj[v]:
                    if e[0] not in seen and e[1] == v:
                        new.add(e[0])
                    elif e[0] == v and e[1] not in seen:
                        new.add(e[1])
                        cnt+= 1
            curr = new
            seen.update(new)

        return cnt