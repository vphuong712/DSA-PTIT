#include<bits/stdc++.h>
using namespace std;

int n, check;
char a[101];

void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = 'A';
	}
}

void sinh() {
	int i = n;
	while(i >= 1 && a[i] == 'H') {
		a[i] = 'A';
		i--;
	}
	if(i == 0) {
		check = 1;
	} else {
		a[i] = 'H';
	}
}


bool check_str(string str) {
    if(str[0] == 'H' && str[str.length() - 1] == 'A') {
        for(int i = 0; i < str.length() - 1; i++) {
            if(str[i] == 'H' && str[i] == str[i+1]) {
                return false;
            }
        }
        return true;
    }
    return false; 
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		ktao();
		check = 0;
		while(!check) {
			string tmp = "";
			for(int i = 1; i <= n; i++) {
				tmp += a[i];
			}
			if(check_str(tmp)) {
				cout << tmp << endl;
			}
			sinh();
		}
	}
}
