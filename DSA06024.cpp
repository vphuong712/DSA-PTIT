#include<bits/stdc++.h>
using namespace std;

int min_idx(int n, int index, int a[]) {
	int min = 101;
	int res = -1;
	for(int i = index; i <= n - 1; i++) {
		if(a[i] < min) {
			min = a[i];
			res = i;
		}
	}
	return res;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count = 0;
	int i = 0;
	while(i < n - 1) {
		int idx = min_idx(n, i, a);
		swap(a[i], a[idx]);
		count++;
		i++;
		cout << "Buoc " << count << ": ";
		for(int x : a) {
			cout << x << " ";
		}
		cout << endl;
	}
	cout << endl;
}
