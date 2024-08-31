public class Solution {
    public double MaxProbability(int n, int[][] edges, double[] succProb, int start_node, int end_node) {
        var visited = new bool[n];
        var profit = new double[n];
        var pq = new PriorityQueue<int, double>();
        var graph = new Dictionary<int, Dictionary<int, double>>();

        pq.Enqueue(start_node, 0);
        profit[start_node] = 0;

        for(int i = 0; i < n; i++)
            profit[start_node] = 0;

        for(int i = 0; i < succProb.Length; i++) {
            if(!graph.ContainsKey(edges[i][0]))
                graph[edges[i][0]] = new Dictionary<int, double>();
            if(!graph.ContainsKey(edges[i][1]))
                graph[edges[i][1]] = new Dictionary<int, double>();
            graph[edges[i][0]][edges[i][1]] = succProb[i];
            graph[edges[i][1]][edges[i][0]] = succProb[i];
        }
        
        while(pq.Count > 0) {
            var node = pq.Dequeue();
            if(visited[node])
                continue;
            
            visited[node] = true;

            if(graph.ContainsKey(node)) {
                foreach(var vertex in graph[node]) {
                    var temp = (profit[node] == 0 ? 1 : profit[node]) * vertex.Value;
                    if(!visited[vertex.Key] && temp > profit[vertex.Key]) {
                        profit[vertex.Key] = temp;
                        pq.Enqueue(vertex.Key, -temp);
                    }
                }
            }
        }
        return profit[end_node];
    }
}