#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, unordered_set<int>& component) {
    visited[node] = true;
    component.insert(node);
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, component);
        }
    }
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

    vector<bool> visited(N + 1, false);
    vector<unordered_set<int>> components;
    unordered_set<int> componentWith1;


    for (int i = 1; i <= N; ++i) {
        if (!visited[i]) {
            unordered_set<int> component;
            dfs(i, adj, visited, component);
            components.push_back(component);
            if (component.count(1)) {
                componentWith1 = component;
            }
        }
    }

    int maxConnected = componentWith1.size();


    for (const auto& component : components) {
        if (component != componentWith1) {
            maxConnected = max(maxConnected, (int)(componentWith1.size() + component.size()));
        }
    }

    cout << maxConnected << endl;

    return 0;
}

