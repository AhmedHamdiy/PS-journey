class Solution:
    def calcEquation(self, equations: List[List[str]], values: List[float], queries: List[List[str]]) -> List[float]:
        graph={}
        for eq,value in zip(equations,values):
            if eq[0] not in graph: graph[eq[0]]={}
            if eq[1] not in graph: graph[eq[1]]={}
            graph[eq[0]][eq[1]]=value
            graph[eq[1]][eq[0]]=1/value
        def dfs(src,dst,visited):
            if src not in graph or dst not in graph: return -1
            if src==dst: return 1
            visited.add(src)
            for neighbour,value in graph[src].items():
                if neighbour not in visited:
                    result=dfs(neighbour,dst,visited)
                    if result!=-1: return result*value
            return -1
        res=[]
        for q in queries: res.append(dfs(q[0],q[1],set()))
        return res