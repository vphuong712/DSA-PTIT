#include<bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

long long POW(long long n, long long k) {
	if(k == 0) return 1;
	if(k == 1) return n % MOD;
	long long tmp = POW(n,k / 2);
	if(k & 1) return tmp % MOD * tmp % MOD * n % MOD;
	else return tmp % MOD * tmp % MOD;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, k;
		cin >> n >> k;
		cout << POW(n, k) << endl;
	}
}
