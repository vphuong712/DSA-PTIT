#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findSubsequences(vector<int>& A, int K, int start, vector<int>& current, vector<vector<int>>& result) {
    if (K == 0) {
        result.push_back(current);
        return;
    }
    if (K < 0) {
        return;
    }
    for (int i = start; i < A.size(); i++) {
        current.push_back(A[i]);
        findSubsequences(A, K - A[i], i + 1, current, result);
        current.pop_back();
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        sort(A.begin(), A.end());
        vector<vector<int>> result;
        vector<int> current;
        findSubsequences(A, K, 0, current, result);
        
        if (result.empty()) {
            cout << -1 << endl;
        } else {
            for (const auto& seq : result) {
                cout << "[";
                for (int i = 0; i < seq.size(); i++) {
                    if (i > 0) cout << " ";
                    cout << seq[i];
                }
                cout << "] ";
            }
            cout << endl;
        }
    }
    return 0;
}
	
