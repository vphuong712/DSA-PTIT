#include<bits/stdc++.h>
using namespace std;

int n, m, u;

bool daxet[1001];
vector<int> List[1001];

void BFS(int u) {
	queue<int> q;
	q.push(u);
	daxet[u] = 1;
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << " ";
		for(int i : List[x]) {
			if(!daxet[i]) {
				daxet[i] = 1;
				q.push(i);
			}
		}
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		for(int i = 0; i < 1001; i++) {
			daxet[i] = 0;
			List[i].clear();
		}
		cin >> n >> m >> u;
		for(int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		BFS(u);
	}
}
