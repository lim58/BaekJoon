#include <stdio.h>

int main(void) {

  int answer[6] = {1,1,2,2,2,8};
  int arr[6];

  for(int i=0; i<6; i++) {
    scanf("%d", &arr[i]);
    if(arr[i] != answer[i]) {
      arr[i] = answer[i] - arr[i];
    }
    else arr[i] = 0;
    printf("%d ", arr[i]);
  }

  return 0;
}