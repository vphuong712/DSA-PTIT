#include <iostream>
#include <vector>
using namespace std;

void dfs(int x, int y, vector<vector<char>>& maze, vector<vector<bool>>& visited) {
    int N = maze.size();
    int M = maze[0].size();
    visited[x][y] = true;

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    for (int k = 0; k < 4; ++k) {
        int nx = x + dx[k];
        int ny = y + dy[k];
        if (nx >= 0 && nx < N && ny >= 0 && ny < M && maze[nx][ny] == '#' && !visited[nx][ny]) {
            dfs(nx, ny, maze, visited);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> maze(N, vector<char>(M));
    vector<vector<bool>> visited(N, vector<bool>(M, false));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> maze[i][j];
        }
    }

    int obstacleCount = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (maze[i][j] == '#' && !visited[i][j]) {
                dfs(i, j, maze, visited);
                obstacleCount++;
            }
        }
    }

    cout << obstacleCount << endl;

    return 0;
}

