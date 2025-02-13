#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>>& graph, vector<int>& result, vector<bool>& visited, int start) {
	int count = 1;
	queue<int> q;
	q.push(start);
	visited[start] = true;

	while(!q.empty()) {
		int x = q.front();
		q.pop();

		result[x] = count++;

		for(int i=0; i<graph[x].size(); i++) {
			int y = graph[x][i];
			if(!visited[y]) {
				q.push(y);
				visited[y] = true;
			}
		}
	}
	return result;
}

int main() {
	int N, M, R;
	cin >> N >> M >> R;

	vector<vector<int>> graph(N + 1);
	vector<int> result(N + 1, 0);
	vector<bool> visited(N, false);

	for(int i=0; i<M; i++) {
		int x, y;
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	for(int i=1; i<=N; i++) {
		sort(graph[i].rbegin(), graph[i].rend());
	}

	bfs(graph, result, visited, R);

	for(int i=1; i<=N; i++) {
		cout << result[i] << '\n';
	}

  return 0;
}
