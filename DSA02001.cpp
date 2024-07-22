#include<bits/stdc++.h>
using namespace std;

void solve(int n, int a[]) {
	int cnt = n;
	int max = n - 1;
	vector<string> v;
	while(cnt--) {
		string tmp = "[";
		for(int i = 0; i < max; i++) {
			tmp += to_string(a[i]) + " ";
		}
		tmp += to_string(a[max])+ "]";
		v.push_back(tmp);
		for(int i = 0; i <= max; i++) {
			a[i] = a[i] + a[i+1];
		}
		max--;
	}
	for(int i = v.size() - 1; i >= 0; i--) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		solve(n, a);
	}
}
