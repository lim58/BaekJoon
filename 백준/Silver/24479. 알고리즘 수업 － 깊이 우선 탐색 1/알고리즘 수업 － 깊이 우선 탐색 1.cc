#include <bits/stdc++.h>
using namespace std;

int countNum = 1;

void dfs(vector<vector<int>>& graph, vector<int>& result, vector<bool>& visited, int x) {
	visited[x] = true;
	result[x] = countNum++;

	for(int i=0; i<graph[x].size(); i++) {
		int y = graph[x][i];
		if(!visited[y]) {
			dfs(graph, result, visited, y);
		}
	}
}

int main() {
	int N, M, R;
	cin >> N >> M >> R;

	vector<vector<int>> graph(N + 1);
	vector<int> result(N + 1, 0);
	vector<bool> visited(N + 1, false);

	for(int i=0; i<M; i++) {
		int x, y;
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	for(int i=1; i<=N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(graph, result, visited, R);

	for(int i=1; i<=N; i++) {
		cout << result[i] << '\n';
	}

  return 0;
}
