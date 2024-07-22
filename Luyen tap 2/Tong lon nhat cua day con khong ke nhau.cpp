#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long findMaxSum(vector<int>& A) {
    int N = A.size();
    if (N == 0) return 0;
    if (N == 1) return A[0];

    vector<long long> dp(N);
    dp[0] = A[0];
    dp[1] = max(A[0], A[1]);

    for (int i = 2; i < N; ++i) {
        dp[i] = max(dp[i-1], A[i] + dp[i-2]);
    }

    return dp[N-1];
}

int main() {
    int T;
    cin >> T; // S? lu?ng b? test

    while (T--) {
        int N;
        cin >> N; // S? ph?n t? c?a m?i b? test

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        // G?i hàm tính và in k?t qu?
        cout << findMaxSum(A) << endl;
    }

    return 0;
}

