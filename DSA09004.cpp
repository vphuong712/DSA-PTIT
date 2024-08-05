#include<bits/stdc++.h>
using namespace std;

vector<int> List[1001];
bool chuaxet[1001];

void DFS(int u) {
	chuaxet[u] = 0;
	cout << u << " ";
	for(int v : List[u]) {
		if(chuaxet[v]) {
			chuaxet[v] = 0;
			DFS(v);
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, u;
		cin >> n >> m >> u;
		for(int i = 1; i <= n; i++) {
			List[i].clear();
			chuaxet[i] = 1;
		}
		for(int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		DFS(u);
		cout << endl;
	}
}
