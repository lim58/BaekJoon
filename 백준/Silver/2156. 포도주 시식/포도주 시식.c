#include <stdio.h>

int findMax(int a, int b) {
  if(a > b) {
    return a;
  }
  return b;
}

int main() {
  int N;
  scanf("%d", &N);

  int dp[N][3];
  // int zero = 0;

  for(int i=0 ; i<N; i++) {
    int n;
    scanf("%d", &n);

    // if(n == 0) zero++;

    if(i == 0) {
      dp[i][0] = 0;
      dp[i][1] = n;
      dp[i][2] = 0;
      continue;
    }

    // if(zero > 1) {
    //   dp[i][0] = dp[i-1][0];
    //   dp[i][1] = dp[i-1][1];
    //   dp[i][2] = dp[i-1][2];
    //   zero = 0;
    //   continue;
    // }

    dp[i][0] = findMax(dp[i-1][0], findMax(dp[i-1][1], dp[i-1][2]));
    dp[i][1] = dp[i-1][0] + n;
    dp[i][2] = dp[i-1][1] + n;
  }

  printf("%d", findMax(findMax(dp[N-1][0], dp[N-1][1]), dp[N-1][2]));
  
  return 0;
}