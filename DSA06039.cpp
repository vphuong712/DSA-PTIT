#include<bits/stdc++.h>
using namespace std;

void findFirstDuplicate(int N, vector<int>& A) {
    unordered_map<int, pair<int, int>> countMap; // {number, {count, first_index}}
    
    for (int i = 0; i < N; ++i) {
        int num = A[i];
        if (countMap.find(num) == countMap.end()) {
            countMap[num] = {1, i};
        } else {
            countMap[num].first++;
        }
    }

    int minIndex = N;
    int result = -1;
    for (const auto& entry : countMap) {
        if (entry.second.first > 1 && entry.second.second < minIndex) {
            minIndex = entry.second.second;
            result = A[minIndex];
        }
    }

    if (result == -1) {
        cout << "NO" << endl;
    } else {
        cout << result << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        findFirstDuplicate(N, A);
    }
    return 0;
}
