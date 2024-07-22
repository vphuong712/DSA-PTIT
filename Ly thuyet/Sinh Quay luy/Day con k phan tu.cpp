#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	multiset<int> ms;
	int i = 0;
	while(i <= n - k) {
		ms.insert(a[i]);
		for(int j = i + 1; j < k; j) {
			ms.insert(a[j]);
			cout << a[i] << " " << a[j] << endl;
			ms.erase(ms.find(a[j]));
		}
		ms.erase(ms.find(a[i]));
		i++;
	}
}
