#include<bits/stdc++.h>
using namespace std;

string s;
vector<int> v;
int check;

void ktao() {
	v.resize(s.length() - 1);
	for(int i = 0; i <= s.length() - 3; i++) {
		v[i + 1] = (s[i] - '0');
	}
}

//void sinh(int k) {
//	int i = k;
//	int max = v[v.size()-1];
//	while(i >= 1 && v[i] == max) {
//		i--;
//	}
//	if(i == 0) {
//		check = 1;
//	} else {
//		v[i]++;
//		for(int j = i + 1; j <= k; j++) {
//			v[j] = v[j-1] + 1;
//		} 
//	}
//	
//}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		getline(cin, s);
		ktao();
//		for(int x : v) {
//			cout << x;
//		}
		cout << v[v.size() - 1];
		check = 0;
		int k = s[s.length() - 1] - '0';
		while(!check) {
			for(int i = 1; i <= k; i++) {
				cout << v[i];
			}
			cout << endl;
			sinh(k);
		}
	}
}
