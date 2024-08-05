#include<bits/stdc++.h>
using namespace std;

int n, m, u;
vector<int> List[1001];
bool visited[1001];

void BFS(int u) {
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()) {
		int v = q.front();
		q.pop();
		cout << v << " ";
		for(int t : List[v]) {
			if(!visited[t]) {
				q.push(t);
				visited[t] = true;
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> m >> u;
		for(int i = 1; i <= n; i++) {
			List[i].clear();
			visited[i] = false;
		}
		for(int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		BFS(u);
		cout << endl;
	}
}
