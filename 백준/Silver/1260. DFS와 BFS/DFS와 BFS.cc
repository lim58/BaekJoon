#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>>& graph, vector<bool>& visited) {
	queue<int> q;

	q.push(start);
	visited[start] = true;
	
	while(!q.empty()){
		int x = q.front();
		q.pop();

		cout << x << ' ';

		for(int i=0; i<graph[x].size(); i++) {
			int y = graph[x][i];
			if(!visited[y]) {
				q.push(y);
				visited[y] = true;
			}
		}
	}
}

void dfs(int x, vector<vector<int>>& graph, vector<bool>& visited) {
	visited[x] = true;
	cout << x << ' ';
	
	for(int i=0; i<graph[x].size(); i++) {
		int y = graph[x][i];
		if(!visited[y]) {
			dfs(y, graph, visited);
		}
	}
}

int main() {
	int N, M, V;
	cin >> N >> M >> V;

	vector<vector<int>> graph(N + 1);
	vector<bool> visited(N + 1, false);

	for(int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(V, graph, visited);
	cout << '\n';

	fill(visited.begin(), visited.end(), false);

	bfs(V, graph, visited);

  return 0;
}
