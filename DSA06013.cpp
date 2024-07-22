#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		map<int, int> mp;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) {
			mp[a[i]]++;
		}
		
		bool check = false;
		int result;
		
		for(auto k : mp) {
			if(k.first == x) {
				check = true;
				result = k.second;
				break;
			}
		}
		if(check) {
			cout << result;
		} else {
			cout << -1;
		}
		cout << endl;	
	}
}
