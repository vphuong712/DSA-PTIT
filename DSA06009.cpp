#include<bits/stdc++.h>
using namespace std;

int first(int a[], int l, int r, int target) {
	
	int res = -1;
	
	while(l <= r) {	
		
		int m = (l+r)/2;
		
		if(a[m] == target) {
			res = m;
			r = m - 1;
		}
		else if(a[m] > target) {
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}
	return res;
}

int last(int a[], int l, int r, int target) {
	int res = -1;
	while(l <= r) {
		int m = (l+r)/2;		
		if(a[m] == target) {
			res = m;
			l = m + 1;
		}
		else if(a[m] > target) {
			r = m - 1;
		}
		else {
			l = m + 1;
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
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		int count = 0;
		for(int i = 0; i <= n - 1; i++) {
			int target = k - a[i];
			int first_target = first(a, i+1, n-1, target);
			int last_target = last(a, i+1, n-1, target);
//			cout << first_target << " " << last_target << endl;
			if(first_target != -1 && last_target != -1) {
				count += (last_target - first_target + 1);
			}
		}
		cout << count << endl;
	}
}
