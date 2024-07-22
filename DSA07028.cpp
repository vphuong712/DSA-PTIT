#include<bits/stdc++.h>
using namespace std;

void solve(int n, int a[]) {
	vector<int> v(n, 0);
	stack<int> st;
	for(int i = 0; i < n; i++) {
		st.push(a[i]);
		while(!st.empty()) {
			if(a[i] >= st.top()) {
				v[i]++;
				st.pop();
			}
		}
	}
	for(int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		solve(n, a);
	}
}
