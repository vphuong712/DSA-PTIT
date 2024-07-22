#include<bits/stdc++.h>
using namespace std;

int n, k, a[101], check;

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

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		ktao();
		check = 0;
		int b[k + 1];
		for(int i = 1; i <= k; i++) {
			cin >> b[i];
		}
		int count = 0;
		while(!check) {
			count++;
			bool ok = true;
			for(int i = 1; i <= k; i++) {
				if(a[i] != b[i]) {
					ok = false;
					break;
				}
			}
			if(ok) {
				break;
			}
			sinh();
		}
		cout << count << endl;
	}
}
