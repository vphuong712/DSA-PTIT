#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, s, k;
		cin >> n >> s >> k;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		multiset<int> ms;
		int sum = 0;
		for(int i = 0; i <= s - 1; i++) {
			ms.insert(a[i]);
		}
		int i = 0;
		bool check = false;
		while(i <= s - 1) {
			for(int x : ms) {
				sum += x;
			}			
			if(sum > k) {
				ms.erase(ms.find(a[i]));
				i++;
				sum = 0;
			} else {
				check = true;
				break;
			}			
		}
		if(check) {
			cout << i + 1 << endl;
		} else {
			cout << -1 << endl;
		}
	}
}
