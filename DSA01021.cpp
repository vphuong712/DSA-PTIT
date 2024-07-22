#include<bits/stdc++.h>
using namespace std;

void solve(int n, int a[], int k) {
	int i = k;
	set<int> s;
	for(int i = 1; i <= k; i++) {
		s.insert(a[i]);
	}
	while(i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if(i == 0) {
		cout << k << endl;
	} else {
		a[i]++;
		for(int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
		for(int i = 1; i <= k; i++) {
			s.insert(a[i]);
		}
		cout << s.size() - k << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n + 1];
		for(int i = 1; i <= k; i++) {
			cin >> a[i];
		}
		solve(n, a, k);
	}
}
