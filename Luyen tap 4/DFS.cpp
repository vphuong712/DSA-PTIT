#include<bits/stdc++.h>
using namespace std;

int n, m, u;

bool chuaxet[1005];
vector<int> List[1005];

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
		cin >> n >> m >> u;
		int x, y;
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i = 0; i < 1005; i++) {
			List[i].clear();
		}
		for(int i = 1; i <= m; i++) {
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		DFS(u);
		cout << endl;		
	}
}
