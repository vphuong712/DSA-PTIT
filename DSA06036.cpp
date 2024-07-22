#include<bits/stdc++.h>
using namespace std;

bool check(int n, long long a[], int k) {
	
	for(int i = 0; i < n - 2; i++) {
		int target = k - a[i];
		for(int j = i + 1; j < n; j++) {
			if(lower_bound(a + j + 1, a + n, target - a[j]) - a != upper_bound(a + j + 1, a + n, target - a[j]) - a) {
				return true;
			}
		}
	}
	return false;
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
		sort(a, a + n);
		if(check(n, a, k)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
