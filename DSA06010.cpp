#include<bits/stdc++.h>
using namespace std;



int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cin.ignore();
		string str;
		getline(cin, str);
		set<int> s;
		for(int i = 0; i < str.size(); i++) {
			if(str[i] != ' ') {
				s.insert(str[i] - '0');
			}
		}

		for(int x : s) {
			cout << x << " ";
		}
		cout << endl;
		
	}
}
