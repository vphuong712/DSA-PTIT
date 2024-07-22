#include<bits/stdc++.h>
using namespace std;

bool check(string s) {
	stack<char> st;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
			st.push(s[i]);
		}
		else if(s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (st.empty()) {
                return false;
            }
		}
		else if(s[i] == ')' && st.top() == '(') {
			st.pop();
		}
		else if(s[i] == ']' && st.top() == '[') {
			st.pop();
		}
		else if(s[i] == '}' && st.top() == '{') {
			st.pop();
		}		
	}
	return st.empty();
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		if(check(s)) {
			cout << "true" << endl;
		} else {
			cout << "false" << endl;
		}
	}
}
