#include <iostream>
#include <vector>
#include <stack>
using namespace std;

string solve(string S) {
    string result = "";
    stack<int> st;

    for (int i = 0; i <= S.length(); i++) {
        st.push(i + 1);

        if (i == S.length() || S[i] == 'I') {
            while (!st.empty()) {
                result += to_string(st.top());
                st.pop();
            }
        }
    }
    
    return result;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
		cout << solve(s) << endl;
	}
}



