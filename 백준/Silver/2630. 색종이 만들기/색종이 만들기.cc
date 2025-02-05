#include <bits/stdc++.h>
using namespace std;

int white=0, blue=0;

int correct(int iStart, int iEnd, int jStart, int jEnd, vector<vector<int>>& arr) {
	int n = arr[iStart][jStart];
	for(int i=iStart; i<iEnd; i++) {
		for(int j=jStart; j<jEnd; j++) {
			if(n != arr[i][j]) return false;
		}
	}
	n == 0? white++ : blue++;
	return true;
}

void divide(int iStart, int iEnd, int jStart, int jEnd, vector<vector<int>>& arr) {
	if (correct(iStart, iEnd, jStart, jEnd, arr)) return;

	int half = (iEnd - iStart) / 2;

	divide(iStart, iStart+half, jStart, jStart+half, arr);
	divide(iStart, iStart+half, jStart+half, jEnd, arr);
	divide(iStart+half, iEnd, jStart, jStart+half, arr);
	divide(iStart+half, iEnd, jStart+half, jEnd, arr);
}

int main() {
	int N;
	cin >> N;

	vector<vector<int>> arr(N, vector<int>(N));
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			cin >> arr[i][j];
		}
	}

	divide(0, N, 0, N, arr);

	cout << white << '\n';
	cout << blue << '\n';

	return 0;
}