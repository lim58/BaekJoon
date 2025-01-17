#include <stdio.h>

int main() {
  int N, k, n;
  scanf("%d", &N);

  int dp[15][15] = { 0 };

  for (int j = 1; j <= 14; j++) {
    dp[0][j] = j;
  }

  for (int i = 1; i <= 14; i++) { 
    for (int j = 1; j <= 14; j++) {
      dp[i][j] = dp[i-1][j] + dp[i][j-1];
    }
  }

  while (N--) {
    scanf("%d %d", &k, &n);
    printf("%d\n", dp[k][n]);
  }

  return 0;
}
