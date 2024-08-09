"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

from typing import Optional
class Solution:
    def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:
        if not node:
            return node
        q, graph = deque([node]), {node.val:Node(node.val,[])}
        while q:
            cur = q.popleft()
            new_node = graph[cur.val]
            for _node in cur.neighbors:
                if _node.val not in graph:
                    graph[_node.val]=Node(_node.val,[])
                    q.append(_node)
                new_node.neighbors.append(graph[_node.val])
                
        return graph[node.val]
        