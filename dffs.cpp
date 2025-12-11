#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(int start, vector<vector<int>> &adj, int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    cout << "\nBFS: ";
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (int nbr : adj[node])
            if (!visited[nbr]) {
                visited[nbr] = true;
                q.push(nbr);
            }
    }
}
void dfsUtil(int node, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";
    for (int nbr : adj[node])
        if (!visited[nbr])
            dfsUtil(nbr, adj, visited);
}
void dfs(int start, vector<vector<int>> &adj, int n) {
    vector<bool> visited(n, false);
    cout << "DFS: ";
    dfsUtil(start, adj, visited);
}
int main() {
    int n = 5;
    vector<vector<int>> adj(n);
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {2};
    dfs(0, adj, n);
    bfs(0, adj, n);
    cout<<endl;
    return 0;
}
