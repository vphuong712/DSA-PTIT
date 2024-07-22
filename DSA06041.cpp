#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		map<int, int> mp;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		int res = -1;
		for(auto x : mp) {
			if(x.second > res && x.second > n/2) {
				res = x.first;
			}
		}
		if(res != -1) {
			cout << res << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
