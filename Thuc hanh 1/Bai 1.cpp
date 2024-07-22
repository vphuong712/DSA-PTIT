#include<bits/stdc++.h>
using namespace std;



int n, k, a[21], check, prime[1000001];

void ktao() {
	for(int i = 1; i <= k; i++) {
		a[i] = i;
	}
}

void sinh() {
	int i = k;
	while(i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if(i == 0) {
		check = 1;
	} else {
		a[i]++;
		for(int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}

void sieve() {
	for(int i = 0; i <= 1000000; i++) {
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(1000000); i++) {
		if(prime[i]) {
			for(int j = i * i; j <= 1000000; j += i) {
				prime[j] = 0;
			}
		}
	}
}

int main() {
	sieve();
	cin >> n >> k;
	ktao();
	check = 0;
	int count = 0;
	while(!check) {
		count++;
		if(prime[count]) {
			cout << count << ": ";
			for(int i = 1; i <= k; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}
		sinh();
	}
}
