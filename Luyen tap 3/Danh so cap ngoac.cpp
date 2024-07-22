#include<bits/stdc++.h>
using namespace std;

void solve(string s) {
	stack<int> st;
	int cnt = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == '(') {
			cnt++;
			cout << cnt << " ";
			st.push(cnt);		
		}
		else if(s[i] == ')') {
			cout << st.top() << " ";
			st.pop();
		}
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		solve(s);
	}
}
