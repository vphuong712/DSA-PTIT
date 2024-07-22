#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) {
			b[i] = i + 1;
		}
		int count = 0;
		do {
			bool check = true;
			count++;
			for(int i = 0; i < n; i++) {
				if(a[i] != b[i]) {
					check = false;
					break;
				}
			}
			if(check) {
				cout << count << endl;
				break;
			}
		} while(next_permutation(b, b + n));
	}
}
