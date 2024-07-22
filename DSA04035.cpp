#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long POW(long long a, long long b) {
	if(b == 0 ) return 1;
	if(b == 1) return a % MOD;
	long long t = POW(a, b / 2) % MOD;
	long long res = (t * t) % MOD;
	if(b & 1) res = (res * a) % MOD;
	return res;
}

int main() {
	while(1) {
		long long a, b;
		cin >> a >> b;
		if(a == 0 && b == 0)
			break;
		cout << POW(a, b) << endl;		
	}

}
