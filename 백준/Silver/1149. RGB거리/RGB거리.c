#include <stdio.h>

int min(int num1, int num2) {
  return num1 > num2 ? num2 : num1;
}

int main() {
  int N, result = 0;
  scanf("%d", &N);

  int cost[N][3];
  int dp[N][3];

  for (int i = 0; i < N; i++) {
    scanf("%d %d %d", &cost[i][0], &cost[i][1], &cost[i][2]);
  }

  dp[0][0] = cost[0][0];
  dp[0][1] = cost[0][1];
  dp[0][2] = cost[0][2];

  for (int i = 1; i < N; i++) {
    dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + cost[i][0];
    dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + cost[i][1];
    dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + cost[i][2];
  }

  result = min(min(dp[N - 1][0], dp[N - 1][1]), dp[N - 1][2]);
  printf("%d\n", result);

  return 0;
}
