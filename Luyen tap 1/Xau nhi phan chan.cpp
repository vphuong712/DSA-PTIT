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
	} else {
		a[i] = 1;
	}
}

bool check_chan(string s) {
	int cnt = 0;
	for(int i = 0; i < s.length(); i++) {
		cnt += (s[i] - '0');
	}
	return cnt % 2 == 0;
}



int main() {
	cin >> n;
	ktao();
	check = 0;
	while(!check) {
		string res = "";
		for(int i = 1; i <= n; i++) {
			res += to_string(a[i]);
		}
		if(check_chan(res)) {
			for(int i = 0; i < res.length(); i++) {
				cout << res[i] << " ";
			}
			cout << endl;
		}
		sinh();
	}
}
