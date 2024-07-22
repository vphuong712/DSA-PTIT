#include<bits/stdc++.h>
using namespace std;

int n, k, a[101], check;

void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}

void sinh() {
	int i = n;
	while(n >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if(i == 0) {
		check = 1;
	}
	else {
		a[i] = 1;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		ktao();
		check = 0;
		while(!check) {
			string tmp;
			int cnt = 0;
			for(int i = 1; i <= n; i++) {
				cnt += a[i];
				tmp += to_string(a[i]);
			}
			if(cnt == k) {
				cout << tmp << endl;
			}
			sinh();
		}
	}
}
