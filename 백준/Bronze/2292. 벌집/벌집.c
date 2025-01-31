#include <stdio.h>

int main() {
  int N, layer=1, hap=2;
  scanf("%d", &N);

  while(N >= hap) {
    hap += layer * 6;
    layer++;
  }

  printf("%d", layer);
  
  return 0;
}