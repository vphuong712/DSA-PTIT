#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<int> F(n, 1);
	for(int i = 1; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if(a[i] > a[j]) {
				F[i] = max(F[i], F[j] + 1);
			}
		}
	}
	cout << *max_element(F.begin(), F.end()) << endl;
}
