#include<bits/stdc++.h>
using namespace std;

string convert(string s) {
	int i = s.size() - 1;
	while(i > 0 && s[i] == '1') {
		s[i] = '0';
		i--;
	}
	if(i == 0) {
		return s + "0";
	}
	else {
		s[i] = '1';
	}
	return s;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		queue<string> q;
		vector<string> v;
		q.push("1");
		v.push_back("1");
		for(int i = 2; i <= n; i++) {
			string tmp = q.front();
			if(tmp[tmp.length() - 1] == '0') {
				tmp[tmp.length() - 1] = '1';
				q.pop();
				q.push(tmp);
				v.push_back(tmp);
			} else {
				tmp = convert(tmp);
				q.pop();
				q.push(tmp);
				v.push_back(tmp);
			}
		}
		for(string x : v) {
			if(stoi(x) <= n) {
				cout << x << " ";
			}
		}
		cout << endl;
	}
}
