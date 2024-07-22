#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int length = s.length();
		if((s[0] - '0' == s[length - 2] - '0') && (s[1] - '0' == s[length-1] - '0')) {
			
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
