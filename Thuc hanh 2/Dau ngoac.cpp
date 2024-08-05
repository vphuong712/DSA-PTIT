#include<bits/stdc++.h>
using namespace std;

bool check(string s) {
	stack<char> st;
	for(char c : s) {
		if(c == ')' || c == ']' || c == '}') {
			if(!st.empty()) {
				char tmp = st.top();
				st.pop();
				if(c == ')' && tmp != '(') {
					return false;
				}
				else if(c == ']' && tmp != '[') {
					return false;
				}
				else if (c == '}' && tmp != '{') {
					return false;
				}
			} else {
				return false;
			}
		} else if(c == '(' || c == '[' || c == '{') {
			st.push(c);
		}
	}
	if(!st.empty()) {
		return false;
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		if(check(s)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}

