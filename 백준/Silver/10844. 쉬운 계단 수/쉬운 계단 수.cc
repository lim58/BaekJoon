#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000000;

int main() {
	int N;
	cin >> N;

	long long dp[101][10] = { 0 };

	for(int i=1; i<10; i++) {
		dp[1][i] = 1;
	}

	for(int i=2; i<=N; i++) {
		dp[i][0] = dp[i-1][1] % MOD;
		dp[i][9] = dp[i-1][8] % MOD; 
		for(int j=1; j<9; j++) {
			dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % MOD;
		}
	}

	long long result = 0;
	for(int i=0; i<10; i++) {
		result = (result + dp[N][i]) % MOD;
	}

	cout << result;

  return 0;
}
