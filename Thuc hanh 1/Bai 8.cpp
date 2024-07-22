#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
	return a > b;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			a[i] = i + 1;
		}
		vector<string> v;
		do {
			string s = "";
			for(int i = 0; i < n; i++) {
				s += to_string(a[i]);
			}
			v.push_back(s);
		} while(next_permutation(a, a + n));
		sort(v.begin(), v.end(), cmp);
		string str = "";
		for(string x : v) {
			str += x + ",";
		}
		for(int i = 0; i < str.length() - 1; i++) {
			cout << str[i];
		}
		cout << endl;
	}
	
}
