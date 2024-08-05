#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int largestRectangleArea(const vector<int>& heights) {
    int max_area = 0;
    stack<int> s;
    vector<int> extended_heights = heights;
    extended_heights.push_back(0); // Sentinel value to handle remaining bars in stack

    for (int i = 0; i < extended_heights.size(); ++i) {
        while (!s.empty() && extended_heights[i] < extended_heights[s.top()]) {
            int h = extended_heights[s.top()];
            s.pop();
            int w = s.empty() ? i : i - s.top() - 1;
            max_area = max(max_area, h * w);
        }
        s.push(i);
    }
    return max_area;
}

void solve() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> matrix(N, vector<int>(M));
        vector<vector<int>> height(N, vector<int>(M, 0));

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> matrix[i][j];
            }
        }

        int max_area = 0;
        pair<int, int> dimensions = {0, 0};

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                height[i][j] = matrix[i][j] == 0 ? 0 : (i == 0 ? 1 : height[i-1][j] + 1);
            }

            int area = largestRectangleArea(height[i]);
            if (area > max_area) {
                max_area = area;
                int width = 0;
                int height_val = 0;
                
                for (int j = 0; j < M; ++j) {
                    if (height[i][j] > 0) {
                        width++;
                        height_val = max(height_val, height[i][j]);
                    } else {
                        if (width * height_val == max_area) {
                            dimensions = min(dimensions, make_pair(width, height_val));
                        }
                        width = 0;
                        height_val = 0;
                    }
                }
                
                if (width * height_val == max_area) {
                    dimensions = min(dimensions, make_pair(width, height_val));
                }
            }
        }

        if (max_area == 0) {
            cout << "0 0" << endl;
        } else {
            int small_side = min(dimensions.first, dimensions.second);
            int large_side = max(dimensions.first, dimensions.second);
            cout << small_side << " " << large_side << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}

