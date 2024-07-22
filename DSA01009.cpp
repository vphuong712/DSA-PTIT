#include<bits/stdc++.h>
using namespace std;

int n, k, check;
char a[16];

void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = 'A';
	}
}

void sinh() {
	int i = n;
	while(i >= 1 && a[i] == 'B') {
		a[i] = 'A';
		i--;
	}
	if(i == 0) {
		check = 1;
	} else{
		a[i] = 'B';
	}
}

bool check_str(string s, int k) {
	int count = 0;
	for(int i = 0; i <= s.length() - k; i++) {
		if(s[i] == 'A') {
			count++;
		}
	}
	if(count == 1) return true;
	return false;
}


int main() {
	cin >> n >> k;
	ktao();
	check = 0;
	while(!check) {
		string tmp = "";
		for(int i = 1; i <= n; i++) {
			tmp += a[i];
		}
		if(check_str(tmp, k)) {
			cout << tmp << endl;
		}
//		cout << tmp << endl;
		sinh();
	}
}
