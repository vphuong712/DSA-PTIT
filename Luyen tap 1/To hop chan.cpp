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
			a[j] = a[j-1] + 1;
		}
	}
}

bool check_str(string s) {
	int sum = 0;
	for(int i = 0; i < s.length(); i++) {
		sum += (s[i] - '0');
	}
	return sum % 2 == 0;
}

int main() {
	cin >> n >> k;
	ktao();
	check = 0;
	while(!check) {
		string tmp = "";
		for(int i = 1; i <= k; i++) {
			tmp += to_string(a[i]);
		}
		if(check_str(tmp)) {
			for(int i = 1; i <= k; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}
		sinh();
	}
}
