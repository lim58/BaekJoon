#include <bits/stdc++.h>
using namespace std;

// int correct(int iStart, int iEnd, int jStart, int jEnd, vector<vector<char>>& board) {
// 	int count = 0;
// 	char firstWord = board[0][0];
// 	for(int i=iStart; i<iEnd; i++) {
// 		for(int j=jStart; j<jEnd; j++) {
// 			if((i + j) % 2 == 0 && board[i][j] != firstWord) count++;
// 			else if ((i + j) % 2 == 1 && board[i][j] == firstWord) count++;
// 		}
// 	}
// 	return count;
// }

int correct(int iStart, int iEnd, int jStart, int jEnd, vector<vector<char>>& board) {
	int countW = 0;
	int countB = 0;

	for(int i=iStart; i<iEnd; i++) {
		for(int j=jStart; j<jEnd; j++) {
			if((i + j) % 2 == 0) {
				if(board[i][j] != 'W') countW++;
				if(board[i][j] != 'B') countB++;
			}
			else {
				if(board[i][j] != 'B') countW++;
				if(board[i][j] != 'W') countB++;
			}
		}
	}
	return min(countW, countB);
}

int main() {
	int N, M;
	cin >> N >> M;

	vector<vector<char>> board(N, vector<char>(M));

	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			cin >> board[i][j];
		}
	}

	int min = 100;
	for(int i=0; i<=N-8; i++) {
		for(int j=0; j<=M-8; j++) {
			int result = correct(i, i+8, j, j+8, board);
			if (result < min) {
				min = result;
			}
		}
	}
	
	cout << min << endl;

	return 0;
}