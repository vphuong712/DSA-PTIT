#include <iostream>
#include <vector>
using namespace std;

// Function to count 'A' in the first k positions of F[n]
int countA(int n, int k, vector<vector<int>>& dp) {
    if (k <= 0) return 0;
    if (n == 0) return min(k, 1); // F[0] = "A"
    if (n == 1) return 0;         // F[1] = "B"
    if (dp[n][k] != -1) return dp[n][k];

    // F[n] = F[n-1] + F[n-2]
    int len_n_minus_1 = (1 << (n - 1)); 

    if (k <= len_n_minus_1) {
        dp[n][k] = countA(n - 1, k, dp);
    } else {
        dp[n][k] = countA(n - 1, len_n_minus_1, dp) + countA(n - 2, k - len_n_minus_1, dp);
    }

    return dp[n][k];
}

int main() {
    int t;
    cin >> t;

    vector<vector<int>> dp(46, vector<int>(100001, -1));

    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << countA(n, k, dp) << endl;
    }

    return 0;
}

