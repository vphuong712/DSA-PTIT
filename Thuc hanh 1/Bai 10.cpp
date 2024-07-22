#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
	bool has_next = next_permutation(a, a + n);
	while(has_next) {
		if(a[n - 1] == k) {
			for(int i = 0; i < n; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}
		has_next = next_permutation(a, a + n);
	}
	
}
