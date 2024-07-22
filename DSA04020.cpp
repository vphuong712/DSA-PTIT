#include<bits/stdc++.h>
using namespace std;

int b_search(int n, int a[], int k) {
	int l = 0;
	int r = n - 1;
	int res = -1;
	while(l <= r) {
		int m = (l + r) / 2;
		if(a[m] == k) {
			return m;
		}
		else if(a[m] < k) {
			l = m + 1;
		} 
		else {
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
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		if(b_search(n, a, k) == -1) {
			cout << "NO" << endl;
		}
		else {
			cout << b_search(n, a, k) + 1 << endl;
		}
	}
}
