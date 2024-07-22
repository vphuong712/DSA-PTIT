#include<bits/stdc++.h>
using namespace std;

int n, a[31], check;

void ktao(int idx) {
	for(int i = 1; i <= idx; i++) {
		a[i] = 0;
	}
}

void sinh(int idx) {
	int i = idx;
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

bool check_str(string s) {
	string res = "";
	for(int i = s.length() - 1; i >= 0; i--) {
		res += s[i];
	}
	return res == s;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 2; i <= n; i += 2) {
			ktao(i);
			check = 0;
			while(!check) {
				string tmp = "";
				for(int j = 1; j <= i; j++) {
					tmp += to_string(a[j]);
				}
				if(tmp.length() % 2 == 0 && check_str(tmp)) {
					cout << tmp << " ";
				}
				sinh(i);
			}			
		}
		cout << endl;
	}
}
