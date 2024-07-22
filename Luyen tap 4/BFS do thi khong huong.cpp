#include<bits/stdc++.h>
using namespace std;

vector<int> List[1001];
bool daxet[1001];

void BFS(int u) {
	queue<int> Q;
	Q.push(u);
	daxet[u] = 1;
	while(!Q.empty()) {
		int x = Q.front();
		Q.pop();
		cout << x << " ";
		for(int i : List[x]) {
			if(!daxet[i]) {
				daxet[i] = 1;
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
		for(int i = 0; i < 1001; i++) {
			daxet[i] = 0;
			List[i].clear();
		}
		for(int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		BFS(u);
	}
}
