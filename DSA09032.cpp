#include<bits/stdc++.h>
using namespace std;

int parent[100001];
int num[100001];


void make_set() {
	for(int i = 1; i < 100001; i++) {
		parent[i] = i;
		num[i] = 1;
	}
}

int find(int a) {
	if(a == parent[a]) {
		return a;
	}
	else {
		return parent[a] = find(parent[a]);
	}
}

void Union(int a, int b) {
	int u = find(a);
	int v = find(b);
	if(u == v) {
		return;
	}
	else {
		if(num[u] < num[v]) swap(u, v);
		parent[v] = u;
		num[u] += num[v];
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		make_set();
		while(m--) {
			int x, y;
			cin >> x >> y;
			Union(x, y);
		}
		cout << *max_element(num, num + 100001) << endl;
	}
}
