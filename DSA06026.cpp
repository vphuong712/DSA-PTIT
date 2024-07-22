#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n],i,j;
	for ( i= 0 ; i< n; i++) {
		cin >> a[i];
	}
	int count = 0;
	for (i = 0; i < n - 1; i++) {
		for (j = 0 ; j < n - i - 1; j++) {
			if (a[j] > a[j+1]) {
				swap(a[j],a[j+1]);
			}
		}
		count++;
		cout << "Buoc " << count << ": ";
		for (j = 0 ; j< n; j++) {
			cout << a[j] << " ";
		}
		cout << endl;
	}

	return 0;
}
