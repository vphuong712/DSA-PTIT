#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		map<int,int> mp;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]] = i;
		}
		cout << mp[k] + 1 << endl;
	}
}
