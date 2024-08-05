#include<bits/stdc++.h>
using namespace std;
string convert(string s) {
	int i = s.size() - 1;
	while(i > 0 && 	s[i] == '9') {
		s[i] = '0';
		i--;
	}
	if(i == 0) {
		return s + "0";
	}
	else {
		s[i] = '9';
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
		q.push("90");
		while(stoi(q.front()) % n != 0) {
			string tmp = q.front();
			if(tmp[tmp.size() - 1] == '0') {
				tmp[tmp.size() - 1] = '9';
				q.pop();
				q.push(tmp);
			}
			else {
				tmp = convert(tmp);
				q.pop();
				q.push(tmp);
			}
		}
		cout << q.front() << endl;
	}
}
