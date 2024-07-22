#include<bits/stdc++.h>
using namespace std;

long long MAX = -1e9;

int main() {
	string s;
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	while(ss >> tmp) {
		if(stoll(tmp) > MAX) {
			MAX = stoll(tmp);
		}
	}
	cout << MAX << endl;
}
