#include<bits/stdc++.h>
using namespace std;

int n, k, a[16], check;

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
	cin >> n >> k;
	ktao();
	check = 0;
	while(!check) {
		int sum = 0;
		for(int i = 1; i <= k; i++) {
			sum += a[i];
		}
		if(sum % 2 == 0) {
			for(int i = 1; i <= k; i++) {
				cout << a[i] << " ";
			}
			cout << endl;			
		}
		sinh();
	}
}
