#include<bits/stdc++.h>
using namespace std;

bool check_sum(int n, int a[]) {
	int i = 0;
	int sum = 0;
	while(i < n - 1) {
		sum += a[i]-a[i+1];
		i += 1;
	}
	return sum > 0;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
	bool has_next = next_permutation(a, a + n);
	while(has_next) {
		if(check_sum(n, a)) {
			for(int i = 0; i < n; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}
		has_next = next_permutation(a, a + n);
	}
	
}
