#include <iostream>
#include <vector>
#include <stack>
using namespace std;

long long sumOfMaxElements(vector<int>& arr) {
    int n = arr.size();
    vector<int> left(n), right(n);
    stack<int> s;
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && arr[s.top()] < arr[i]) {
            s.pop();
        }
        left[i] = s.empty() ? i + 1 : i - s.top();
        s.push(i);
    }

    while (!s.empty()) s.pop();

    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && arr[s.top()] <= arr[i]) {
            s.pop();
        }
        right[i] = s.empty() ? n - i : s.top() - i;
        s.push(i);
    }

    long long totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += (long long)arr[i] * left[i] * right[i];
    }

    return totalSum;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }
        cout << sumOfMaxElements(arr) << endl;
    }
    return 0;
}

