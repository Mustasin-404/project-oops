#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Edge {
    int u, v, w;
};

int main() {
    int n, m;
    cin >> n >> m;     // n = vertices, m = edges

    vector<Edge> edges(m);
    for (int i = 0; i < m; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    int src;
    cin >> src;

    vector<int> dist(n, INT_MAX);
    dist[src] = 0;

    // Relax all edges n-1 times
    for (int i = 1; i <= n - 1; i++) {
        for (auto &e : edges) {
            if (dist[e.u] != INT_MAX && dist[e.u] + e.w < dist[e.v]) {
                dist[e.v] = dist[e.u] + e.w;
            }
        }
    }

    // Check for negative cycle
    for (auto &e : edges) {
        if (dist[e.u] != INT_MAX && dist[e.u] + e.w < dist[e.v]) {
            cout << "Negative cycle detected!\n";
            return 0;
        }
    }

    // Print distances
    for (int i = 0; i < n; i++) {
        cout << "Dist to " << i << " = ";
        if (dist[i] == INT_MAX) cout << "INF\n";
        else cout << dist[i] << "\n";
    }

    return 0;
}
