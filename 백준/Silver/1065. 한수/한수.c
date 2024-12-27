#include <stdio.h>
#include <string.h>

int main() {
  int N, a=0, b=0, c=0, result=0;
  scanf("%d", &N);

  if(N < 100) {
    result = N;
  }
  else {
    result = 99;
    for(int i=100; i<=N; i++) {
      a = i / 100;
      b = (i / 10) % 10;
      c = i % 10;
      
      if((a - b) == (b - c)) {
        result++;
      }
    }
  }
  printf("%d", result);
  return 0;
}