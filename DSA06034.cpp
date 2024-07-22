#include<bits/stdc++.h>
using namespace std;

int search_first(long long a[], int l, int r, int k) {
	int res = -1;
	while(l <= r) {
		int m = (l + r) / 2;
		if(a[m] == k) {
			res = m;
			r = m - 1;
		}
		else if(a[m] < k) {
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	return res;
}

int search_last(long long a[], int l, int r, int k) {
	int res = -1;
	while(l <= r) {
		int m = (l + r) / 2;
		if(a[m] == k) {
			res = m;
			l = m + 1;
		}
		else if(a[m] < k) {
			l = m  + 1;
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
		int n, k;
		cin >> n >> k;
		long long a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a+n);
		long long count = 0;
		for(int i = 0; i <= n - 1; i++) {
			int target = k - a[i];
			int first = search_first(a, i+1, n-1,target);
			int last = search_last(a, i+1, n-1,target);
			if(first != -1) {
				count += (last - first + 1);
			}
		}
		cout << count << endl;
	}
}
