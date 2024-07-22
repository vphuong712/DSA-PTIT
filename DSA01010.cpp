#include<bits/stdc++.h>
using namespace std;

int n, k, a[101], check;

void sinh() {
	int i = k;
	while(i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if(i == 0) {
		check = 1;
	} else {
		a[i]++;
		for(int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		check = 0;
		set<int> s;
		for(int i = 1; i <= k; i++) {
			cin >> a[i];
			s.insert(a[i]);
		}
		int first = s.size();
		sinh();
		if(check) {
			cout << k << endl;
		} else {
			for(int i = 1; i <= k; i++) {
				s.insert(a[i]);
			}
			int last = s.size();
			cout << last - first << endl;				
		}
	}
}
