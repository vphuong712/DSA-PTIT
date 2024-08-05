#include<bits/stdc++.h>
using namespace std;

vector<int> F[1011];
bool visited[1011];

void DFS(int u) {
	visited[u] = true;
	for(int x : F[u]) {
		if(!visited[x]) {
			DFS(x);
		}
	}
}

void tplt(int n) {
	int cnt = 0;
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= n; i++) {
		if(!visited[i]) {
			cnt++;
			DFS(i);
		}
	}
	cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		for(int i = 1; i <= n; i++) {
			F[i].clear();
			visited[i] = false;
		}
		for(int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			F[x].push_back(y);
			F[y].push_back(x);
		}
		tplt(n);
	}
}
