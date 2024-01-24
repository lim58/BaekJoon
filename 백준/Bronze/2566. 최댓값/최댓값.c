#include <stdio.h>

int main(void) {

  int arr[9][9]={0}, max=0, a=1, b=1;

  for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
      scanf("%d", &arr[i][j]);
      if(max < arr[i][j]) {
        max = arr[i][j];
        a = i+1;
        b = j+1;
      }
    }
  }
  printf("%d\n%d %d", max, a, b);
  
  return 0;
}