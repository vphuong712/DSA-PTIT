#include<bits/stdc++.h>
using namespace std;

void solve(string s) {
	string res;
	stack<string> st;
	for(int i = s.size() - 1; i >= 0; i--) {
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
			res = '(' + st.top();
			st.pop();
			res += s[i];
			res = res + st.top() + ')';
			st.pop();
			st.push(res);
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
