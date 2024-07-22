#include <bits/stdc++.h>
using namespace std;

int n, k;

bool compare(pair<int, int> a, pair<int, int> b) {
    int absA = abs(a.first - k);
    int absB = abs(b.first - k);
    if (absA == absB) {
        return a.second < b.second;  // S?p x?p theo v? trí ban d?u khi kho?ng cách b?ng nhau
    }
    return absA < absB;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            a[i] = {value, i};  // Luu tr? c? giá tr? và v? trí ban d?u
        }
        stable_sort(a.begin(), a.end(), compare);
        for (int i = 0; i < n; i++) {
            cout << a[i].first << " ";
        }
        cout << "\n";
    }
    return 0;
}

