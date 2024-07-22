#include <bits/stdc++.h>
using namespace std;

int n, k, a[20], check;

void ktao() {
    for (int i = 1; i <= k; i++) {
        a[i] = 1;
    }
}

void sinh() {
    int i = k;
    while (i >= 1 && a[i] == n) {
        i--;
    }
    if (i == 0) {
        check = 1;
    } else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[i];
        }
    }
}

int main() {
    cin >> n >> k;
    ktao();
    check = 0;

    while (!check) {
        for (int i = 1; i <= k; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }

    return 0;
}
