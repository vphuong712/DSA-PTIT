#include<bits/stdc++.h>
using namespace std;

vector<int> List[1005];
bool daxet[1005];

void BFS(int u) {
	queue<int> Q;
	Q.push(u);
	daxet[u] = 1;
	while(!Q.empty()) {
		int v = Q.front();
		Q.pop();
		cout << v << " ";
		for(int i : List[v]) {
			if(!daxet[i]) {
				daxet[i] = true;
				Q.push(i);
			}
		}
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, u;
		cin >> n >> m >> u;
		for(int i = 0; i < 1005; i++) {
			List[i].clear();
			daxet[i] = false;
		}
		for(int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		BFS(u);
	}	
}
