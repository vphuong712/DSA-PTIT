#include<bits/stdc++.h>
using namespace std;

int n, a[101], check = 0;

void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = 6;
	}
}

void sinh() {
	int i = n;
	while(i >= 1 && a[i] == 8) {
		a[i] = 6;
		i--;
	}
	if(i == 0) {
		check = 1;
	} else {
		a[i] = 8;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		ktao();
		cout << pow(2, n) << endl;
		while(!check) {
			for(int i = 1; i <= n; i++) {
				cout << a[i];
			}
			cout << " ";
			sinh();
		}
		check = 0;
		cout << endl;
	}
}
