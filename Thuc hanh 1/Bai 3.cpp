#include<bits/stdc++.h>
using namespace std;

int n, k, a[20], check;

void ktao() {
	for(int i = 1; i <= k; i++) {
		a[i] = i;
	}
}

void sinh(int n) {
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
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);

		check = 0;
		int tmp[100];
		for(int i = 0; i < s.length(); i++) {
			int num = s[i] - '0';
			tmp[i+1] = num;
		}
		string op = "0";
		while(!check) {
			string temp = "";
			for(int i = 1; i <= k; i++) {
				temp += to_string(tmp[a[i]]);
			}
			if(temp != op) {
				cout << temp << endl;
				op = temp;
			}
			sinh(n);
		}
	}
}
