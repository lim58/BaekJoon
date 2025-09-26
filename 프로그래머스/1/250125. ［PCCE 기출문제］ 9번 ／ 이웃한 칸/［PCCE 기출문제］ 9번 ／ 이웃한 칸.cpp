#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    
    string targetColor = board[h][w];
    
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    
    for(int dir=0; dir<4; dir++) {
        int nw = w + dx[dir];
        int nh = h + dy[dir];
        
        if(nw < 0 || nh < 0 || nh >= board.size() || nw >= board[0].size()) {
            continue;
        }
        
        if(board[nh][nw] == targetColor) {
            answer++;
        }
    }
    
    return answer;
}