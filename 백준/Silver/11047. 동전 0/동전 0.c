#include <stdio.h>

int main() {
  int N, K, result=0;
  scanf("%d %d", &N, &K);

  int arr[N];

  for(int i=0; i<N; i++) {
    scanf("%d", &arr[i]);
  } 

  for(int j=N-1; j>=0; j--) {
    if(arr[j] <= K) {
      result += K / arr[j];
      K %= arr[j];
    }
  }

  printf("%d", result);

  return 0;
}