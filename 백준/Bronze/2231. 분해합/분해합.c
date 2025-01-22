#include <stdio.h>

int digit_sum(int num) {
  int sum = 0;
  while(num > 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int find(int N) {
  for(int i=1; i<=N; i++) {
    if(N == i + digit_sum(i)) return i;
  }
  return 0;
}

int main() {
  int N;
  scanf("%d", &N);
  printf("%d", find(N));
  
  return 0;
}