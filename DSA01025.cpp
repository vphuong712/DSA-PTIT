#include<bits/stdc++.h>
using namespace std;

int n, k, check;
char a[16];

void ktao() {
	a[1] = 'A';
	a[2] = 'B';
	a[3] = 'C';
	a[4] = 'D';
	a[5] = 'E';
	a[6] = 'F';
	a[7] = 'G';
	a[8] = 'H';
	a[9] = 'I';
	a[10] = 'J';
	a[11] = 'K';
	a[12] = 'L';
	a[13] = 'M';
	a[14] = 'N';
	a[15] = 'O';
}

void sinh() {
	int i = k;
	while(i >= 1 && a[i] == a[n - k + i]) {
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

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		ktao();
		check = 0;
		while(!check) {
			for(int i = 1; i <= k; i++) {
				cout << a[i];
			}
			cout << endl;
			sinh();
		}
	}
}
