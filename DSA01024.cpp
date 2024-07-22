#include<bits/stdc++.h>
using namespace std;

int n, k, a[31];
string tmp[31];

void in() {
	for(int i = 1; i <= k; i++) {
		cout << tmp[a[i]] << " ";
	}
	cout << endl;
}

void Try(int i, int num) {
	for(int j = a[i - 1] + 1; j <= num - k + i; j++) {
		a[i] = j;
		if(i == k) {
			in();
		} else {
			Try(i + 1, num);
		}
	}
}

int main() {
	cin >> n >> k;
	set<string> s;
	for(int i = 1; i <= n; i++) {
		string str;
		cin >> str;
		s.insert(str);
	}
	int num = s.size();
	int i = 0;
	for(string x : s) {
		tmp[++i] = x;
	}
	Try(1, num);
}
