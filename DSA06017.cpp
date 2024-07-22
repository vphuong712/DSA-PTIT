#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		long long a[n], b[m], r[n+m];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) {
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b , b + m);
		
		int i = 0, j = 0, k = 0;
		while(i < n && j < m) {
			if(a[i] <= b[j]) {
				r[k] = a[i];
				i++;
				k++;
			}
			if(a[i] > b[j]) {
				r[k] = b[j];
				j++;
				k++;
			}
		}
		while(i < n) {
			r[k] = a[i];
			i++;
			k++;
		}
		while(j < m) {
			r[k] = b[j];
			j++;
			k++;
		}
		for(int i = 0; i < n + m; i++) {
			cout << r[i] << " ";
		}
		cout << endl;
	}
}
