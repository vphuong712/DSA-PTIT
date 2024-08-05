#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	multimap<int, int> mp;
	while(n--) {
		int x, y;
		cin >> x >> y;
		mp.insert({x, y});
	}
	for(auto it : mp) {
		cout << it.first << " " << it.second << endl;
	}
	cout << endl;
}

//3
//2 3
//1 3
//1 2
