#include<bits/stdc++.h>
using namespace std;

long long F[46];


long long solve(int n, k) {
	while(n > 2) {
		if(k <= F[n - 2]) {
			n -= 2;
		}
		else {
			k -= F[n - 2];
			n -= 1;
		}
	}
	if(n == 0) return k - 0 + 1;
	else return k - 1 + 1;
}

void fibo() {
	F[0] = F[1] = 1;
	for(int i = 2; i <= 45; i++) {
		F[i] = F[i - 2] + F[i - 1];
	}
}

int main() {
	fibo();
	int t;
	cin >> t;
	while(t--) {
		int n;
		long long k;
		cin >> n >> k;
	}
}
