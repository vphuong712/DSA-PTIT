#include<bits/stdc++.h>
using namespace std;

long long F[93];

void solve(long long n, long long k) {
	while(n > 2) {
		if(k <= F[n - 2]) n -= 2;
		else {
			 n -= 1;
			 k -= F[n-1];
		}
	}
	if(n == 1) cout << 'A';
	else cout << 'B';
	cout << endl;
}

void fibo() {
	F[1] = F[2] = 1;
	for(int i = 3; i <= 92; i++) {
		F[i] = F[i - 2] + F[i - 1];
	}
}

int main() {
	fibo();
	int t;
	cin >> t;
	while(t--) {
		long long n, k;
		cin >> n >> k;
		solve(n, k);
	}
}
