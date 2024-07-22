#include<bits/stdc++.h>
using namespace std;

const long long Mod = 1e9 + 7;

long long solve(long long n) {
	if(n == 0) {
		return 0;
	}
	if(n == 1) {
		return 1;
	}
	return solve(n - 2) % Mod + solve(n - 1) % Mod;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		cout << solve(n) << endl;
	}
}
