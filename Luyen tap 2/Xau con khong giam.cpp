#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp(string S) {
    int n = S.size();
    if (n == 0) return 0;

    vector<int> dp(n, 1); 

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (S[j] <= S[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
    string S;
    cin >> S;
    cout << dp(S) << endl;

    return 0;
}

