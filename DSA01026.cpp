#include<bits/stdc++.h>
using namespace std;

int n, a[16], check;

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

bool check_str(string s) {
	if(s.length() < 6) return false;
	if(s[0] != '8' || s[s.length() - 1] != '6') return false;
	for(int i = 0; i < s.length() - 1; i++) {
		if(s[i] == '8' && s[i] == s[i + 1]) {
			return false;
		}
	}
	for(int i = 1; i < s.length() - 3; i++) {
		if(s[i] == '6' && s[i] == s[i+1] && s[i+1] == s[i+2] && s[i + 2] == s[i + 3]) {
			return false;
		}
	}
	return true;
}

int main() {
	cin >> n;
	ktao();
	check = 0;
	while(!check) {
		string tmp = "";
		for(int i = 1; i <= n; i++) {
			tmp += to_string(a[i]);
		}
		if(check_str(tmp)) {
			cout << tmp << endl;
		}
		sinh();
	}
}
