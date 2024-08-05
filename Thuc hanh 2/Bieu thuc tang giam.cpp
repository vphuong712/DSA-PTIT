#include<bits/stdc++.h>
using namespace std;

void solve(string s) {
	stack<int> st;
	vector<int> v;
	for(int i = 0; i <= s.size(); i++) {
		st.push(i + 1);
		if(s[i] == 'I' || i == s.size()) {
			while(!st.empty()) {
				v.push_back(st.top());
				st.pop();
			}
		}
	}
	for(int x : v) {
		cout << x;
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		solve(s);
	}
}
