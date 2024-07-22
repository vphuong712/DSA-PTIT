#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string str;
		cin >> str;
		cin.ignore();
		sort(str.begin(), str.end());
		set<int> s;
		string tmp = "";
		do{
			if(str[0] != '0') {
				s.insert(stoi(str));
			}
			for(int i = 0 ; i < str.length(); i++) {
				if(str[i] != '0') {
					tmp += str[i];
				}
			}
			s.insert(stoi(tmp));
			tmp = "";
		} while(next_permutation(str.begin(), str.end()));
		for(int x : s) {
			cout << x << endl;
		}		
	}
}
