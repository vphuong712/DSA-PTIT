#include <bits/stdc++.h>
using namespace std;

char solve(int N, long long K) {
    if (N == 1) return 'A'; 
    long long len = (1LL << N) - 1;
    long long mid = (len + 1) / 2; 
    if (K == mid) return 'A' + N - 1; 
    else if(K < mid) return solve(N - 1, K);
	else return solve(N - 1, K - mid);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        long long K;
        cin >> N >> K;
        cout << solve(N, K) << endl;
    }
    return 0;
}

