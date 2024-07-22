#include<bits/stdc++.h>
using namespace std;

void solve(string s) {
	string tmp, pos;
	stack<string> st;
	for(int i = s.size() - 1; i >= 0; i--) {
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
			tmp = st.top();
			st.pop();
			pos = st.top();
			st.pop();
			st.push(tmp + pos + s[i]);
		}
		else {
			st.push(string(1, s[i]));
		}
	}
	cout << st.top() << endl;
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
