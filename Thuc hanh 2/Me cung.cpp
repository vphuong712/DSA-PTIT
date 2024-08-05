#include <iostream>
#include <vector>
using namespace std;

bool hasCycleUtil(int v, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& parent) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u]) {
            parent[u] = v;
            if (hasCycleUtil(u, adj, visited, parent)) {
                return true;
            }
        } else if (u != parent[v]) {
            return true;
        }
    }
    return false;
}

bool hasCycle(int N, vector<vector<int>>& adj) {
    vector<bool> visited(N + 1, false);
    vector<int> parent(N + 1, -1);
    for (int i = 1; i <= N; ++i) {
        if (!visited[i] && hasCycleUtil(i, adj, visited, parent)) {
            return true;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> adj(N + 1);
        for (int i = 0; i < M; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);  // Because the graph is undirected
        }
        
        if (hasCycle(N, adj)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

