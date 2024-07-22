#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		int min_idx;
		int count = 0;
		
		
		for(int i = 0; i < n - 1; i++) {
			min_idx = i;
			for(int j = i + 1; j < n; j++) {
				if(a[j] < a[min_idx]) {
					min_idx = j;
				}
			}
			if(min_idx != i) {
				swap(a[min_idx], a[i]);
				count++;
			}
		}
		cout << count << endl;
	}
}
