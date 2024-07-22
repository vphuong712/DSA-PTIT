#include<bits/stdc++.h>
using namespace std;

void ktao(int k, int a[]) {
	for(int i = 1; i <= k; i++) {
		a[i] = i;
	}
}

void solve(int n, int k, int a[]) {
	int i = k;
	while(i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if(i == 0) {
		ktao(k, a);
	}
	else {
		a[i]++;
		for(int j = i + 1; j <= k; j++) {
			a[j] = a[j-1] + 1;
		}
	}
	for(int i = 1; i <= k; i++) {
		cout << a[i] << " ";
	}	
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n+1];
		for(int i = 1; i <= k; i++) {
			cin >> a[i];
		}
		solve(n, k, a);
	}
}
