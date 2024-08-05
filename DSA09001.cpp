#include<bits/stdc++.h>
using namespace std;

vector<int> List[1001];

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		for(int i = 1; i <= n; i++) {
			List[i].clear();
		}
		for(int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		for(int i = 1; i <= n; i++) {
			cout << i << ": " ;
			for(int v : List[i]) {
				cout << v << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}
1
6  9
1  2
1  3 
2  3
2  5
3  4
3  5
4  5
4  6
5  6
