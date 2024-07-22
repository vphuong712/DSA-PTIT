#include<bits/stdc++.h>
using namespace std;

int n, a[101], check = 0;

void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}

void sinh() {
	int i = n;
	while(i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if(i == 0) {
		check = 1;
	}
	else {
		a[i] = 1;
	}
}

int main() {
    cin >> n;
    ktao();
    while(!check) {
        int cnt = 0;
        string tmp = "";
        for(int i = 1; i <= n; i++) {
            tmp += to_string(a[i]);
            if(a[i] == 1) cnt++;
        }
        if(cnt % 2 == 0) {
            for(int i = 0; i < tmp.length(); i++) {
            	cout << tmp[i] << " ";
			}
			cout << endl;
        }
        sinh();
    }
    return 0;
}
