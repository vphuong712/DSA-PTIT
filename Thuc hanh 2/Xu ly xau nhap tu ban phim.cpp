#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    vector<char> v;
    int pos = 0;  
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<') {
            if (pos > 0) pos--;  
        }
		else if (s[i] == '>') {
            if (pos < v.size()) pos++;  
        }
		else if (s[i] == '-') {
            if (pos > 0) {
                v.erase(v.begin() + pos - 1);  
                pos--;  
            }
        }
		else {
            v.insert(v.begin() + pos, s[i]);  
            pos++;  
        }
    }

    for (char c : v) {
        cout << c;
    }
    cout << endl;
}

int main() {
    string s;
    cin >> s;
    solve(s);
    return 0;
}

