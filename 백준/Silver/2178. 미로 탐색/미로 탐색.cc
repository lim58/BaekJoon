#include <bits/stdc++.h>
using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int bfs(vector<vector<int>>& arr, int N, int M) {
    vector<vector<int>> dist(N, vector<int>(M, 0));
    queue<pair<int, int>> q;
    
    q.push({0, 0});
    dist[0][0] = 1;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < N && ny < M && arr[nx][ny] == 1 && dist[nx][ny] == 0) {
                q.push({nx, ny});
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
    }
    return dist[N-1][M-1];
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> arr(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < M; j++) {
            arr[i][j] = line[j] - '0';
        }
    }

    cout << bfs(arr, N, M) << endl;
    return 0;
}
