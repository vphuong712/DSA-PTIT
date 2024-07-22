#include <bits/stdc++.h>
using namespace std;

void solve(const string& s) {
    stack<int> st;
    vector<int> result(s.length(), 0);
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            cnt++;
            st.push(cnt);
            result[i] = cnt;
        } else if (s[i] == ')') {
            if (!st.empty()) {
                result[i] = st.top();
                st.pop();
            }
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (result[i] != 0) {
            cout << result[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();  // Ignore the newline character after the number of test cases
    while (t--) {
        string s;
        getline(cin, s);  // Read the entire line including spaces
        solve(s);
    }
    return 0;
}

