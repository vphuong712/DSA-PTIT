#include<bits/stdc++.h>
using namespace std;


int count_num(string n) {
	queue<string> q;
	q.push("1");
	int cnt = 0;
	while(1) {
		string tmp = q.front();
		if(tmp.size() < n.size() || tmp.size() == n.size() && tmp <= n) {
			cnt++;
			q.pop();
			q.push(tmp + "0");
			q.push(tmp + "1");
		}
		else {
			return cnt;
		}
	}
	return cnt;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string n;
		cin >> n;
		cout << count_num(n) << endl;
	}
	return 0;
}
