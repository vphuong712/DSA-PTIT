#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
	queue<string> q;
	vector<string> v;
	q.push("6");
	q.push("8");
	while(!q.empty()) {
		string tmp = q.front();
		if(tmp.size() > n) {
			break;
		}
		v.push_back(tmp);
		q.pop();
		q.push(tmp + "6");
		q.push(tmp + "8");
	}
	reverse(v.begin(), v.end());
	for(string s : v) {
		cout << s << " ";
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		solve(n);
		cout << endl;
	}
}
