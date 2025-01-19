#include <stdio.h>
#include <math.h>

int isPrime(int num) {
  if(num == 1) return 0;
  for(int i=2; i<sqrt(num) + 1; i++) {
    if(num % i == 0 && num != i) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int N, count=0;
  scanf("%d", &N);
  
  while(N--) {
    int a;
    scanf("%d", &a);
    if(isPrime(a)) {
      count++;
    }
  }

  printf("%d", count);
  return 0;
}