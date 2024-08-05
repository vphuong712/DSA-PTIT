#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	while(q--) {
		int x;
		cin >> x;
		int cnt = 0;
		for(int i = x; i < n; i++) {
			if(a[i] > a[x - 1]) {
				cnt++;
				x = i;
			}
		}
		cout << cnt << endl;
	}
}
