#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    int n = s.size();
    vector<char> a;
    stack<int> posStack; 

    int pos = 0; 

    for(int i = 0; i < n; i++) {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            a.insert(a.begin() + pos, s[i]);
            pos++;
        }
        else {
            if(s[i] == '<') {
                posStack.push(pos);
                if(pos > 0) pos--;
            }
            else if(s[i] == '>') {
                posStack.push(pos);
                if(pos < a.size()) pos++;
            }
            else if(s[i] == '-') {
                if(pos > 0 && !a.empty()) {
                    a.erase(a.begin() + pos - 1);
                    pos--;
                }
            }
        }
    }

    while (!posStack.empty()) {
        posStack.pop(); 
    }

    for(char c : a) {
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

