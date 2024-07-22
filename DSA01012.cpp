#include<bits/stdc++.h>
using namespace std;

void gray(int n) {
	for(int i = 0; i < (1 << n); i++ ) {
		unsigned int val = (i^(i >> 1));
		bitset<32> B(val);
		string s = B.to_string();
		cout << s.substr(32 - n) << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		gray(n);
	}
}

