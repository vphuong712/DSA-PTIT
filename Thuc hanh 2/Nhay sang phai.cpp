#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> computeJumps(const vector<int>& heights) {
    int n = heights.size();
    vector<int> jumps(n, 0);
    stack<int> st;

    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && heights[i] >= heights[st.top()]) {
            st.pop();
        }
        if (!st.empty()) {
            jumps[i] = jumps[st.top()] + 1;
        }
        st.push(i);
    }

    return jumps;
}

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> heights(N);
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    vector<int> jumps = computeJumps(heights);
	
    for (int i = 0; i < Q; ++i) {
        int start;
        cin >> start;
        cout << jumps[start - 1] << endl;
    }

    return 0;
}

