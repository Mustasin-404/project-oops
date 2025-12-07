#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void dijkstra(int n, vector<vector<pair<int,int>>> &adj, int src) {
    vector<int> dist(n, 1e9);
    dist[src] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, src});
    while(!pq.empty()) {
        auto top = pq.top();
        pq.pop();
        int d = top.first;
        int node = top.second;
        for(auto &it : adj[node]) {
            int nextNode = it.first;
            int weight = it.second;
            if(d + weight < dist[nextNode]) {
                dist[nextNode] = d + weight;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }
    cout << "\nShortest distances from source " << src << ":\n";
    for(int i = 0; i < n; i++) {
        cout << "Node " << i << " -> " << dist[i] << endl;
    }
}
int main() {
    int n, m;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;
    vector<vector<pair<int,int>>> adj(n);
    cout << "Enter edges (u v weight):\n";
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // remove for directed graph
    }
    int src;
    cout << "Enter source vertex: ";
    cin >> src;
    dijkstra(n, adj, src);
    return 0;
}
