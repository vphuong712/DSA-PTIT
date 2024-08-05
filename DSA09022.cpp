#include<bits/stdc++.h>
using namespace std;

int n, m, u;
vector<int> List[1001];
bool visited[1001];

void DFS(int u) {
	cout << u << " ";
	visited[u] = true;
	for(int v : List[u]) {
		if(!visited[v]) {
			DFS(v);
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> m >> u;
		for(int i = 0; i < 1001; i++) {
			List[i].clear();
			visited[i] = false;
		}
		for(int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		DFS(u);
		cout << endl;
	}
}
