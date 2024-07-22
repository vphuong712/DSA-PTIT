#include<bits/stdc++.h>
using namespace std;

int n, a[101], check = 0;

void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}

void sinh(int len) {
	int i = len;
	while(i >= 1 && a[i] == 1) {
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

bool check_string(string s) {
	int l = 0;
	int r = s.length() - 1;
	while(l < r) {
		if(s[l] != s[r]) {
			return false;
		} else {
			l++;
			r--;
		}
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 2; i <= n; i+=2) {
			ktao();
			check = 0;
			while(!check) {
				string tmp = "";
				for(int j = 1; j <= i; j++ ) {
					tmp += to_string(a[j]);
				}
				if(check_string(tmp)) {
					cout << tmp << " ";
				}
				sinh(i);
			}			
		}
		cout << endl;
	}
}
