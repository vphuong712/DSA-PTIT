#include <iostream>
#include <stack>
#include <string>

using namespace std;

string check(string s) {
	stack<char> S;
	for (auto c : s) {
		if (c == ')') {
			bool ok = true;
			while (S.top() != '(') {
				char tmp = S.top();
				if (tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/')ok = false;
				S.pop();
			}
			if (ok)return "Yes";
			S.pop();
		}
		else S.push(c);
	}
	return "No";
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string s;
        getline(cin, s);
        cout << check(s) << endl;
    }
    return 0;
}

