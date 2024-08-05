#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

void bfs(int start, const vector<vector<int>>& graph, vector<bool>& visited, int skip_node) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : graph[u]) {
            if (v != skip_node && !visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int countComponents(int N, const vector<vector<int>>& graph, int skip_node) {
    vector<bool> visited(N + 1, false);
    int components = 0;
    
    for (int i = 1; i <= N; ++i) {
        if (i != skip_node && !visited[i]) {
            components++;
            bfs(i, graph, visited, skip_node);
        }
    }
    
    return components;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> graph(N + 1);
    
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= N; ++i) {
        int component_count = countComponents(N, graph, i);
        cout << component_count << endl;
    }
    
    return 0;
}

