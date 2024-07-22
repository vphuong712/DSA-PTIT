#include<bits/stdc++.h>
using namespace std;

int temp[1001];

bool cmp(int a, int b) {
	return temp[a] > temp[b];
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		memset(temp, 0,sizeof(temp));
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) {
			temp[a[i]]++;
		}
		sort(a, a + n);
		stable_sort(a, a + n, cmp);
		for(int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;

	}
}
