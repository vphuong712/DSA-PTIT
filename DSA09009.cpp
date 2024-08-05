#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> List[1001];
bool visited[1001];

void BFS(int u) {
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()) {
		int v = q.front();
		q.pop();
		for(int t : List[v]) {
			if(!visited[t]) {
				q.push(t);
				visited[t] = true;
			}
		}
	}
}

void tplt() {
	int cnt = 0;
	for(int i = 1; i <= n; i++) {
		if(!visited[i]) {
			cnt++;
			BFS(i);
		}
	}
	cout << cnt << endl;
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
		tplt();
	}
}
