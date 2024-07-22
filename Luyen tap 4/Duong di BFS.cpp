#include<bits/stdc++.h>
using namespace std;

bool daxet[1001];
vector<int> List[1001];
int truoc[1001];

void BFS(int u, int v) {
	queue<int> Q;
	Q.push(u);
	daxet[u] = 1;
	while(!Q.empty()) {
		int x = Q.front();
		Q.pop();
		for(int i : List[x]) {
			if(!daxet[i]) {
				daxet[i] = 1;
				Q.push(i);
				truoc[i] = x;
				if(i == v) return;
			}
		}
	}
}

void path(int u, int v) {
    if (!daxet[v]) { 
        cout << -1 << endl;
        return;
    }
    
    vector<int> path;
    for (int i = v; i != -1; i = truoc[i]) {
        path.push_back(i);
    }
    reverse(path.begin(), path.end());
    
    for (int i : path) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, u, v;
		cin >> n >> m >> u >> v;
		for(int i = 0; i < 1001; i++) {
			daxet[i] = 0;
			List[i].clear();
			truoc[i] = -1;
		}
		for(int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		BFS(u, v);
		path(u, v);
	}
}
