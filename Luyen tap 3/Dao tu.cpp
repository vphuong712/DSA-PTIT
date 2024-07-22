#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp) {
			reverse(tmp.begin(), tmp.end());
			cout << tmp << " ";
		}
		cout << endl;
	}
}
