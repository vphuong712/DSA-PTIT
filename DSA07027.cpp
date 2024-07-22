#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		long long a[n];
		for(long long i = 0; i < n; i++) cin >> a[i];
		vector<long long> v(n, -1);
		for(long long i = 0; i < n - 1; i++) {
			for(long long j = i + 1; j < n; j++) {
				if(a[j] > a[i]) {
					v[i] = a[j];
					break;
				}
			}
		}
		for(long long i = 0; i < n; i++) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
}

