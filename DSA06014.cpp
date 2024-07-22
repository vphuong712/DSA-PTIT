#include<bits/stdc++.h>
using namespace std;


int prime[1000001];

void sieve() {
	for(int i = 0; i < 1000001; i++) {
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	
	for(int i = 2; i <= 1000; i++) {
		if(prime[i]) {
			for(int j = i*i; j <= 1000000; j += i) {
				prime[j] = 0;
			}
		}
	}
}


int main() {
	sieve();
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> v;
		for(int i = 2; i <= n; i++) {
			if(prime[i] == 1) {
				v.push_back(i);
			}
		}
		pair<int, int> p(-1, -1);
		
		for(int i = 0; i < v.size(); i++) {
			int target = n - v[i];
			auto it = lower_bound(v.begin(), v.end(), target);
			if(it != v.end() && *it == target) {
				p = make_pair(v[i], *it);
				break;
			}
		}
		if(p.first != -1) {
			cout << p.first << " " << p.second;
		} else {
			cout << p.first;
		}
		cout << endl;
	}
}
