#include<bits/stdc++.h>
using namespace std;

vector<int> List[1001];
bool chuaxet[1001];

void DFS(int u) {
	chuaxet[u] = false;
	cout << u << " ";
	for(int v : List[u]) {
		if(chuaxet[v]) {
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
		for(int i = 0; i < 1001; i++) {
			List[i].clear();
		}
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		DFS(u);
		cout << endl;
	}
}
