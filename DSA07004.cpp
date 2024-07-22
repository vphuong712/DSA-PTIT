#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int minSwaps(string s) {
    int left = 0, right = 0; // �?m s? ngo?c m? v� d�ng

    for (char c : s) {
        if (c == '(') {
            left++;
        } else {
            if (left > 0) {
                left--; // N?u c� ngo?c m? th� gh�p v?i ngo?c d�ng hi?n t?i
            } else {
                right++; // Kh�ng c� ngo?c m? d? gh�p th� tang s? ngo?c d�ng c?n d?i chi?u
            }
        }
    }
    // K?t qu? l� t?ng s? ngo?c m? v� d�ng c�n l?i chia 2
    return (left + right) / 2;
}

int main() {
    int T;
    cin >> T;
    vector<string> tests(T);
    
    for (int i = 0; i < T; ++i) {
        cin >> tests[i];
    }
    
    for (const string &s : tests) {
        cout << minSwaps(s) << endl;
    }

    return 0;
}

