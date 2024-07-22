#include<bits/stdc++.h>
using namespace std;



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
		int res = 0;
		bool check = 0;
		for(int i = 0; i < n; i++) {
			if(a[i] == k) {
				check = 1;
				res = i;
			}
		}
		if(check) {
			cout << res + 1 << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
