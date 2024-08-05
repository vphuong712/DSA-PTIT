#include<bits/stdc++.h>
using namespace std;

int n, m, s, u;

vector<int> F[1001];
bool visited[1001];
int parent[1001];

void BFS(int u) {
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()) {
		int t = q.front();
		q.pop();
		for(int x : F[t]) {
			if(!visited[x]) {
				q.push(x);
				visited[x] = true;
				parent[x] = t;
			}
		}
	}
}

void find_path(int s, int u) {
	memset(visited, false, sizeof(visited));
	memset(parent, 0, sizeof(parent));
	BFS(s);
	if(!visited[u]) {
		cout << - 1 << endl;
	}
	else {
		vector<int> path;
		while(u != s) {
			path.push_back(u);
			u = parent[u];
		}
		path.push_back(s);
		reverse(path.begin(), path.end());
		for(int x : path) {
			cout << x << " ";
		}
		cout << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> m >> s >> u;
		for(int i = 0; i < n; i++) {
			F[i].clear();
			visited[i] = 0;
		}
		for(int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			F[x].push_back(y);
			F[y].push_back(x);
		}
		find_path(s, u);
	}
}
