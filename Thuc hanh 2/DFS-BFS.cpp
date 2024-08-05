#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

void dfs(int v, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& path, vector<int>& result, int target) {
    visited[v] = true;
    path.push_back(v);
    if (v == target) {
        result = path;
    } else {
        for (int u : adj[v]) {
            if (!visited[u]) {
                dfs(u, adj, visited, path, result, target);
            }
        }
    }
    path.pop_back();
}

vector<int> bfs(int start, int end, vector<vector<int>>& adj) {
    vector<int> parent(adj.size(), -1);
    queue<int> q;
    q.push(start);
    parent[start] = start;
    while (!q.empty() && parent[end] == -1) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (parent[u] == -1) {
                parent[u] = v;
                q.push(u);
            }
        }
    }
    vector<int> path;
    if (parent[end] != -1) {
        for (int v = end; v != start; v = parent[v]) {
            path.push_back(v);
        }
        path.push_back(start);
        reverse(path.begin(), path.end());
    }
    return path;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 2; i <= N; ++i) {
        vector<bool> visited(N + 1, false);
        vector<int> path, result;
        
        dfs(1, adj, visited, path, result, i);

        if (!result.empty()) {
            for (int node : result) {
                cout << node << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }

        vector<int> bfs_path = bfs(i, 1, adj);
        if (!bfs_path.empty()) {
            for (int node : bfs_path) {
                cout << node << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}

