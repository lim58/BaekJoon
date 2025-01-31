#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  
  int hap=1;
  for(int i=1; ;i++) {
    if(N == 1) {
      printf("1");
      break;
    }

    hap += i * 6;
    if(N <= hap) {
      printf("%d", i + 1);
      break;
    }
  }
  
  return 0;
}