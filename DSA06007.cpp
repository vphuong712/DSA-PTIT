#include<bits/stdc++.h>
using namespace std;

void solve(int n, int a[]) {
	vector<int> v;
	for(int i = 0; i < n; i++) {
		v.push_back(a[i]);
	}
	sort(v.begin(), v.end());
	
	vector<int> v2;
	for(int i = 0; i < n; i++) {
		if(v[i] != a[i]) {
			v2.push_back(i);
		}
	}
	cout << v2[0] + 1 << " " << v2[v2.size() - 1] + 1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		solve(n, a);
	}
}
