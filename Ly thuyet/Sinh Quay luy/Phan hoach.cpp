#include<bits/stdc++.h>
using namespace std;

int n, a[101], check, cnt;

void ktao() {
	cnt = 1;
	a[1] = n;
}

void sinh() {
	int i = cnt;
	while(i >= 1 && a[i] == 1) {
		--i;
	}
	if(i == 0) {
		check = 1;
	}
	else {
		a[i]--;
		int d = cnt - i + 1;
		cnt = i;
		int r = d / a[i];
		int q = d % a[i];
		if(r) {
			for(int j = 1; j <= r; j++) {
				++cnt;
				a[cnt] = a[i];
			}
		}
		if(q) {
			++cnt;
			a[cnt] = q;
		}
	}
}

int main() {
	cin >> n;
	check = 0;
	ktao();
	while(!check) {
		for(int i = 1; i <= cnt; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
		sinh();
	}
}
