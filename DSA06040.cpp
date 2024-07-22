#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, k;
		cin >> n >> m >> k;
		long long a[n], b[m], c[k];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < m; i++) {
			cin >> b[i];
		}
		for(int i = 0; i < k; i++) {
			cin >> c[i];
		}
        sort(a, a + n);
        sort(b, b + m);
        sort(c, c + k);
		vector<long long> v;
		int i = 0, j = 0, o = 0;
		while(i < n && j < m && o < k) {
			if(a[i] == b[j] && b[j] == c[o]) {
				v.push_back(a[i]);
				i++;
				j++;
				o++;
			} else if(a[i] < b[j]) {
				i++;
			} else if(b[j] < c[o]) {
				j++;
			} else {
				o++;
			}
		}
		for(auto x : v) {
			cout << x << " ";
		}
		cout << endl;
	}
}
