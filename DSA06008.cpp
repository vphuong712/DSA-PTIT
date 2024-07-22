#include<bits/stdc++.h>
using namespace std;

void solve(int n, int m, int a[], int b[]) {
	stack<int> st;
	for(int i = 0; i < m; i++) {
		st.push(b[i]);
	}
	int count = 0;
	int i = 0;
	while(!st.empty()) {
		if(pow(a[i], st.top()) > pow(st.top(), a[i])) {
			count++;
		}
		i++;
		if(i >= n) {
			i = 0;
			st.pop();
		}
	}
	cout << count << endl;
}


int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n];
		int b[m];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < m; i++) {
			cin >> b[i];
		}
		solve(n, m, a, b);
	}
}
