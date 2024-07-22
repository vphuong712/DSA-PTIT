#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
		reverse(s.begin(), s.end());
		int val = 0;
		for(int i = 0; i < s.length(); i++) {
			val += ((s[i] - '0') << i);
		}
	}
}
