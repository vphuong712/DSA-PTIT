#include<bits/stdc++.h>
using namespace std;

void solve(int n, int m, vector<int>& v1, vector<int>& v2) {
    set<int> s;
    vector<int> union_result;
    vector<int> intersection_result;
    
    // Finding Union
    for (int i = 0; i < n; ++i) {
        s.insert(v1[i]);
    }
    for (int i = 0; i < m; ++i) {
        s.insert(v2[i]);
    }
    for (int element : s) {
        union_result.push_back(element);
    }
    
    // Finding Intersection
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (v1[i] < v2[j]) {
            i++;
        } else if (v1[i] > v2[j]) {
            j++;
        } else {
            intersection_result.push_back(v1[i]);
            i++;
            j++;
        }
    }
    
    // Print Union
    for (int num : union_result) {
        cout << num << " ";
    }
    cout << endl;
    
    // Print Intersection
    for (int num : intersection_result) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v1(n);
        vector<int> v2(m);
        for(int i = 0; i < n; i++) {
            cin >> v1[i];
        }
        for(int i = 0; i < m; i++) {
            cin >> v2[i];
        }
        solve(n, m, v1, v2);
    }
    return 0;
}
