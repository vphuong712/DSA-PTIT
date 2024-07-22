#include<bits/stdc++.h>
using namespace std;

int n, k, a[20], check;

void ktao() {
    for(int i = 0; i < k; i++) {
        a[i] = i;
    }
}

void sinh() {
    int i = k - 1;
    while(i >= 0 && a[i] == n - k + i) {
        i--;
    }
    if(i < 0) {
        check = 1;
    } else {
        a[i]++;
        for(int j = i + 1; j < k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    cin >> n >> k;
    ktao();
    check = 0;
    int tmp[n];
    for(int i = 0; i < n; i++) {
        cin >> tmp[i];
    }
    sort(tmp, tmp + n);
	
	set<string> s;
    while(!check) {
    	string temp = "";
        for(int i = 0; i < k; i++) {
            temp += to_string(tmp[a[i]]) + " ";
        }
        s.insert(temp);
        sinh();
    }
    for(string x : s) {
    	cout << x << endl;
	}
    return 0;
}

