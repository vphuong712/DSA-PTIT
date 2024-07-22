#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
bool visited[1001];
int parent[1001];

void DFS(int u, int target, vector<int>& path, bool& found) {
    visited[u] = true;
    path.push_back(u);
    if (u == target) {
        found = true;
        return;
    }
    for (int v : adj[u]) {
        if (!visited[v] && !found) {
            DFS(v, target, path, found);
        }
    }
    if (!found) {
        path.pop_back();
    }
}

void BFS(int start) {
    queue<int> q;
    q.push(start);
    fill(parent, parent + 1001, -1);
    fill(visited, visited + 1001, false);
    visited[start] = true;
    parent[start] = start;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
                parent[v] = u;
            }
        }
    }
}

void printPath(int start, int end) {
    if (parent[end] == -1) {
        cout << -1 << endl;
        return;
    }
    vector<int> path;
    for (int v = end; v != start; v = parent[v]) {
        path.push_back(v);
    }
    path.push_back(start);
    reverse(path.begin(), path.end());
    for (int v : path) {
        cout << v << " ";
    }
    cout << endl;
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 2; i <= N; i++) {
        vector<int> dfsPath;
        fill(visited, visited + 1001, false);
        bool found = false;
        DFS(1, i, dfsPath, found);

        if (found) {
            for (int v : dfsPath) {
                cout << v << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }

        BFS(i);
        printPath(i, 1);
    }

    return 0;
}

