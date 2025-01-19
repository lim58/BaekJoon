#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);

  int shirts[6];
  for(int i=0; i<6; i++) {
    scanf("%d", &shirts[i]);
  }

  int T, P;
  scanf("%d %d", &T, &P);

  int shirtsCount=0;
  for(int i=0; i<6; i++) {
    shirtsCount += shirts[i] / T;
    if(shirts[i] % T) {
      shirtsCount++;
    }
  }

  int package = N / P;
  int piece = N % P;

  printf("%d\n%d %d", shirtsCount, package, piece);

  return 0;
}