#include<bits/stdc++.h>
using namespace std;

int n, cnt, check;
int a[101];

void ktao() {
	cnt = 1;
	a[1] = n;
}

void sinh() {
	int i = cnt;
	while(i >= 1 && a[i] == 1) {
		i--;
	}
	if(i == 0) {
		check = 1;
	} else {
		a[i]--;
		int d = cnt - i + 1;
		cnt = i;
		int r = d / a[i];
		int m = d % a[i];
		if(r) {
			for(int j = 1; j <= r; j++) {
				a[++cnt] = a[i];
			}
		}
		if(m) {
			a[++cnt] = m;
		}
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
			string tmp = "";
			for(int i = 1; i <= cnt; i++) {
				tmp += to_string(a[i]) + " ";
			}
			tmp[tmp.length() - 1] = ')';
			cout << '(' << tmp << " ";
			sinh();
		}
		cout << endl;
	}
}
