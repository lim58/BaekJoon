#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);

  if(N % 2 == 0) {
    printf("CY");
  } else {
    printf("SK");
  }

  return 0;
}