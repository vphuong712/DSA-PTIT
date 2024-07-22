#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, k;
		cin >> n >> m >> k;
		int a[n], b[m];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		sort(a, a + n);
		sort(b, b + m);
		int i = 0, j = 0, h = 0;
		int res[n+m];
		while(i < n && j < m) {
			if(a[i] <= b[j]) {
				res[h] = a[i];
				i++;
				h++;
			} else {
				res[h] = b[j];
				j++;
				h++;
			}
		}
		while(i < n) {
			res[h] = a[i];
			i++;
			h++;
		}
		while(j < m) {
			res[h] = b[j];
			j++;
			h++;
		}
		cout << res[k-1] << endl;
	}
}
