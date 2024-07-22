#include<bits/stdc++.h>
using namespace std;

int b_search(int n, int a[], int k) {
	int l = 0;
	int r = n - 1;
	while(l <= r) {
		int m = (l+r) / 2;
		if(a[m] == k) {
			return 1;
		}
		else if (k > a[m]) {
			l = m + 1;
		} else {
			r = m - 1;
		}
	}
	return -1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cout << b_search(n, a, k) << endl;
	}
}
