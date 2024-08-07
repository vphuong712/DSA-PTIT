#include <iostream>
#include <vector>

using namespace std;

int countWays(int n) {

    long long dp[n+1];
    
    dp[0] = 1; 
    if (n >= 1) dp[1] = 1; 
    if (n >= 2) dp[2] = dp[1] + 1; 

    for (int i = 3; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    return dp[n];
}

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int n;
        cin >> n; 
        cout << countWays(n) << endl;
    }
    return 0;
}

