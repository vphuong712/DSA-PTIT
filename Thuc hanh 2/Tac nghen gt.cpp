#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

void dfs1(int v, const vector<vector<int>>& adj, vector<bool>& visited, stack<int>& Stack) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u]) {
            dfs1(u, adj, visited, Stack);
        }
    }
    Stack.push(v);
}

void dfs2(int v, const vector<vector<int>>& adjT, vector<bool>& visited) {
    visited[v] = true;
    for (int u : adjT[v]) {
        if (!visited[u]) {
            dfs2(u, adjT, visited);
        }
    }
}

int kosaraju(int N, const vector<vector<int>>& adj) {
    vector<vector<int>> adjT(N + 1);
    for (int v = 1; v <= N; ++v) {
        for (int u : adj[v]) {
            adjT[u].push_back(v);
        }
    }
    
    stack<int> Stack;
    vector<bool> visited(N + 1, false);
    
    for (int i = 1; i <= N; ++i) {
        if (!visited[i]) {
            dfs1(i, adj, visited, Stack);
        }
    }
    
    fill(visited.begin(), visited.end(), false);
    int componentCount = 0;
    
    while (!Stack.empty()) {
        int v = Stack.top();
        Stack.pop();
        if (!visited[v]) {
            dfs2(v, adjT, visited);
            componentCount++;
        }
    }
    
    return componentCount;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> adj(N + 1);
    
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    
    int result = kosaraju(N, adj);
    cout << result << endl;
    
    return 0;
}

