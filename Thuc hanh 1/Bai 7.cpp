#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<vector<int>> result;

void backtrack(int start, vector<int>& current) {
    if (current.size() >= 2) {
        result.push_back(current);
    }
    for (int i = start; i < n; ++i) {
        if (current.empty() || a[i] > current.back()) {
            current.push_back(a[i]);
            backtrack(i + 1, current);
            current.pop_back();
        }
    }
}

int main() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> current;
    backtrack(0, current);

    sort(result.begin(), result.end());

    for (const auto& seq : result) {
        for (int i = 0; i < seq.size(); ++i) {
            if (i > 0) cout << " ";
            cout << seq[i];
        }
        cout << endl;
    }

    return 0;
}

