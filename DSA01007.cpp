#include<bits/stdc++.h>
using namespace std;

int n, check;
char a[101];

void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = 'A';
	}
}

void sinh() {
	int i = n;
	while( i >= 1 && a[i] == 'B') {
		a[i] = 'A';
		i--;
	}
	if(i == 0) {
		check = 1;
	}
	else {
		a[i] = 'B';
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		ktao();
		check = 0;
		while(!check) {
			for(int i = 1; i <= n; i++) {
				cout << a[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
