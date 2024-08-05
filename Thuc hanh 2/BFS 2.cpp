#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;

vector<int> bfs(int start, int n) {
    vector<int> distance(n + 1, -1); 
    vector<int> parent(n + 1, -1);
    queue<int> q;
    
    q.push(start);
    distance[start] = 0;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        for (int neighbor : graph[node]) {
            if (distance[neighbor] == -1) { 
                distance[neighbor] = distance[node] + 1;
                parent[neighbor] = node;
                q.push(neighbor);
            }
        }
    }
    
    return parent;
}

void printPath(int start, int end, const vector<int>& parent) {
    if (parent[end] == -1) {
        cout << "No path" << endl;
        return;
    }
    
    vector<int> path;
    for (int v = end; v != start; v = parent[v]) {
        path.push_back(v);
    }
    path.push_back(start);
    reverse(path.begin(), path.end());
    
    for (int i = 0; i < path.size(); ++i) {
        cout << path[i];
        if (i < path.size() - 1) cout << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, M, s;
        cin >> N >> M >> s;
        
        graph.assign(N + 1, vector<int>());
        
        for (int i = 0; i < M; ++i) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        vector<int> parent = bfs(s, N);
        
        for (int i = 1; i <= N; ++i) {
            if (i != s) {
                printPath(s, i, parent);
            }
        }
    }
    
    return 0;
}

