#include<bits/stdc++.h>
using namespace std;


void prev(int n, char a[]) {
	int i = n;
	if(a[i] == '1') {
		a[i] = '0';
	} else {
		while(i >= 1 && a[i] == '0') {
			a[i] = '1';
			i--;
		}
		if(i >= 1) {
			a[i] = '0';
		}	
	}
	for(int i = 1; i <= n; i++) {
		cout << a[i];
	}	
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		int n = str.length();
		char a[n + 1];
		for(int i = 1; i <= n; i++) {
			a[i] = str[i-1];
		}
//		cout << a[n];
		prev(n, a);
	}
}
