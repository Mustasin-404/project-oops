#include <iostream>
using namespace std;
struct Edge {
    int u, v, w;
};
int main() {
    int V, E;
    cin >> V >> E;
    vector<Edge> edges(E);
    for(int i = 0; i < E; i++)
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    int src = 0;
    vector<int> dist(V, 1e9);
    dist[src] = 0;
    for (int i = 1; i <= V - 1; i++) {
        for (auto &e : edges) {
            if (dist[e.u] + e.w < dist[e.v]) {
                dist[e.v] = dist[e.u] + e.w;
            }
        }
    }
    for (auto &e : edges) {
        if (dist[e.u] + e.w < dist[e.v]) {
            cout << "Negative weight cycle detected\n";
            return 0;
        }
    }
    for (int d : dist)
        cout << d << " ";
        cout<<endl;
}
