#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    return (num1 > num2) - (num1 < num2);
}

int main() {
  int N, result=0, time=0;
  scanf("%d", &N);

  int arr[N];
  for(int i=0; i<N; i++) {
    scanf("%d", &arr[i]);
  }

  qsort(arr, N, sizeof(int), compare);

  for(int i=0; i<N; i++) {
    time += arr[i];
    result += time;
  }

  printf("%d", result);

  return 0;
}