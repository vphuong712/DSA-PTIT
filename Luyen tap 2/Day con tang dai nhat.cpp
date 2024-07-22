#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n], f[1001], res = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		f[i] = 1;
		for(int j = 0; j < i; j++) {
			if(a[j] < a[i]) {
				f[i] = max(f[i], f[j]+1);
			}
		}
		res = max(res, f[i]);
	}
	cout << res << endl;
}
