#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> List[1005];
bool visited[1005];
int parent[1005];

void DFS(int u) {
	visited[u] = true;
	for(int v : List[u]) {
		if(!visited[v]) {
			parent[v] = u;
			DFS(v);
		}
	}
}

bool check_path(int s, int t) {
	memset(visited, false, sizeof(visited));
	DFS(s);
	if(!visited[t]) {
		return false;
	}
	return true;	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		for(int i = 1; i <= n; i++) {
			List[i].clear();
			visited[i] = 0;
		}
		for(int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		int q;
		cin >> q;
		while(q--) {
			int x, y;
			cin >> x >> y;
			if(check_path(x, y)) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
}
