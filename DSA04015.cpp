#include<bits/stdc++.h>
using namespace std;

int b_search(int n, int a[], int x) {
	int l = 0;
	int r = n - 1;
	int res = -1;
	while(l <= r) {
		int m = (l + r) / 2;
		if(a[m] <= x) {
			res = m + 1;
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	return res;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		cout << b_search(n, a, x) << endl;
	}
}
