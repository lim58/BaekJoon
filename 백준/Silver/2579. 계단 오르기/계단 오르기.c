#include <stdio.h>

int max (int num1, int num2) {
  return num1 > num2 ? num1 : num2;
}

int main() {
  int N, result = 0;
  scanf("%d", &N);

  int cost[N+1];
  int dp[N+1][3];

  for(int i=1; i<=N; i++) {
    scanf("%d", &cost[i]);
  }

  dp[0][0] = 0;
  dp[0][1] = 0;
  dp[0][2] = 0;

  for(int i=1; i<=N; i++) {
    dp[i][0] = max(dp[i-1][1], dp[i-1][2]);
    dp[i][1] = dp[i-1][0] + cost[i];
    dp[i][2] = dp[i-1][1] + cost[i];
  }

  result = max(dp[N][1], dp[N][2]);
  printf("%d", result);

  return 0;
}