#include<bits/stdc++.h>
using namespace std;

long long F[45];

void init() {
	F[0] = 1;
	F[1] = 1;
	for(int i = 2; i <= 45; i++) {
		F[i] = F[i - 1] + F[i - 2];
	}
}

int countA(long long n, long long k) {
	if(n == 0) {
		if(k > 0)
			return 1;
	}
	if(n == 1)
		return 0;
	
	if(k <= F[n - 1]) {
		return countA(n - 1, k);
	}
	else {
		return countA(n - 1, F[n - 1]) + countA(n - 2, k - F[n - 1]);
	}
}

int main() {
	init();
	int t;
	cin >> t;
	while(t--) {
		long long n, k;
		cin >> n >> k;
		cout << countA(n, k) << endl;
	}
}
