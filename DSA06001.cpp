#include<bits/stdc++.h>
using namespace std;

void solve(int n, int a[]) {
	vector<int> result;
	sort(a, a+n);
	int l = 0;
	int r = n - 1;
	while (l <= r) {
		if(l != r) {
			result.push_back(a[r]);
			result.push_back(a[l]);
		} else {
			result.push_back(a[l]);
		}
		l++;
		r--;
	}
	for(int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
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
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		solve(n, a);
	}
}
