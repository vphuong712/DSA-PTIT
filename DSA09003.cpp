#include<bits/stdc++.h>
using namespace std;

vector<int> F[1001];

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		for(int i = 0; i <= n; i++) {
			F[i].clear();
		}
		for(int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			F[x].push_back(y);
		}
		for(int i = 1; i <= n; i++) {
			cout << i << ": ";
			for(int v : F[i]) {
				cout << v << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}
