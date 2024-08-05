#include<bits/stdc++.h>
using namespace std;

int n, m;
bool visited[1001][1001];
char a[1001][1001];

void dfs(int i, int j) {
	visited[i][j] = true;
	int dx[4] = {-1, 1, 0, 0};
	int dy[4] = {0, 0, -1, 1};
	for(int k = 0; k < 4; k++) {
		int x = j + dx[k];
		int y = i + dy[k];
		if(x >= 0 && y >= 0 && y < n && x < m && a[y][x] == '#' && !visited[y][x]) {
			dfs(y, x);
		}		
	}
}

int main() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(a[i][j] == '#' && visited[i][j] == false) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}
