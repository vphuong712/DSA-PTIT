#include<bits/stdc++.h>
using namespace std;

int n, a[101], check;

void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}

void sinh() {
	int i = n;
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

bool check_str(string s) {
	string res = "";
	for(int i = s.length() - 1; i >= 0; i--) {
		res += s[i];
	}
	return res == s;
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
			for(int i = 0; i < tmp.length(); i++) {
				cout << tmp[i] << " ";
			}
			cout << endl;
		}
		sinh();
	}
}
