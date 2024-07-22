#include <bits/stdc++.h>
using namespace std;

int n, a[31];

void solve(int length) {
    if (length == 0) {
        cout << "";
        return;
    }
    for (int num = 0; num < (1 << (length / 2)); num++) {
        for (int i = length / 2 - 1; i >= 0; i--) {
            cout << ((num >> i) & 1);
        }
        if (length % 2 == 1) {
            cout << ((num >> 0) & 1);
        }
        for (int i = 0; i < length / 2; i++) {
            cout << ((num >> i) & 1);
        }
        cout << " ";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 2; i <= n; i += 2) {
            solve(i);
        }
        cout << endl;
    }
    return 0;
}
