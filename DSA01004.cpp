#include<bits/stdc++.h>
using namespace std;

bool check = false;

void ktao(int k, int a[]) {
	for(int i = 1; i <= k; i++) {
		a[i] = i;
	}
}

void sinh(int n, int k, int a[]) {
	int i = k;
	while(i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if(i == 0) {
		check = true;
	}
	else {
		a[i]++;
		for(int j = i + 1; j <= k; j++) {
			a[j] = a[j-1] + 1;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n + 1];
		ktao(k, a);
		check = false;
		while(!check) {
			for(int i = 1; i <= k; i++) {
				cout << a[i];
			}
			cout << " ";
			sinh(n,k,a);
		}
		cout << endl;
	}
}
