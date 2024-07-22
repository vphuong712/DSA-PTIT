#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int minSwaps(string s) {
    int left = 0, right = 0; // Ð?m s? ngo?c m? và dóng

    for (char c : s) {
        if (c == '(') {
            left++;
        } else {
            if (left > 0) {
                left--; // N?u có ngo?c m? thì ghép v?i ngo?c dóng hi?n t?i
            } else {
                right++; // Không có ngo?c m? d? ghép thì tang s? ngo?c dóng c?n d?i chi?u
            }
        }
    }
    // K?t qu? là t?ng s? ngo?c m? và dóng còn l?i chia 2
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

