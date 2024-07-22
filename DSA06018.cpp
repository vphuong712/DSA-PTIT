#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        set<int> s;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        int L = *min_element(a, a + n);
        int R = *max_element(a, a + n);
        int total_elements = R - L + 1;
        int missing_elements = total_elements - s.size();
        cout << missing_elements << endl;
    }
    return 0;
}

