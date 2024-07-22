#include<bits/stdc++.h>
using namespace std;

int n, a[100][100];
vector<string> v;

void Try(int i, int j, string s) {
	if(i >= n || j >= n) return;
	if(a[i][j] == 0) return;
	if(i == n - 1 && j == n - 1 && a[i][j] == 1) {
		v.push_back(s);
		return;
	}
	Try(i + 1, j, s + "D");
	Try(i, j + 1, s + "R");
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		v.clear();
		cin >> n;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		Try(0, 0, "");
		if(v.size() == 0) {
			cout << -1 << endl;
		} else {
			sort(v.begin(), v.end());
			for(string x : v) {
				cout << x << " ";
			}
			cout << endl;
		}
	}
}
