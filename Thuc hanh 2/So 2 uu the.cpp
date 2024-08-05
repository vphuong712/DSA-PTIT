#include<bits/stdc++.h>
using namespace std;

bool count_2(string s) {
	if(s[0] == '0') {
		return false;
	}
    int count2 = 0;
    for (char c : s) {
        if (c == '2') {
            count2++;
        }
    }
    return count2 > s.size() / 2;
}

void solve(int n) {\
	queue<string> q;
	q.push("0");
	q.push("1");
	q.push("2");
	int cnt = 0;
	while(cnt <= n - 1) {
		string tmp = q.front();		
		if(count_2(tmp)) {
			cout << tmp << " ";
			cnt++;
		}
		q.pop();
		q.push(tmp + "0");
		q.push(tmp + "1");
		q.push(tmp + "2");		
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

