#include<bits/stdc++.h>
using namespace std;

bool check(string s) {
	stack<char> st;
	for(char c : s) {
		if(c == ')' || c == ']' || c == '}') {
			if(!st.empty()) {
				if(c == ')' && st.top() != '(') {
					return false;
				}
				if(c == ']' && st.top() != '[') {
					return false;
				}
				if(c == '}' && st.top() != '{') {
					return false;
				}
				st.pop();				
			}
		}
		else {
			st.push(c);
		}
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
		if(check(s)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
