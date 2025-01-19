#include <stdio.h>

int arr[1001] = { 0 };

void prime() {
  for(int i=2; i<=1000; i++) {
    arr[i] = 1;
  }

  for(int i=2; i<=1000; i++) {
    if(!arr[i]) continue;
    for(int j=i+i; j<=1000; j+=i) {
      arr[j] = 0;
    }
  }
} 

int main() {
  int N, count=0;
  scanf("%d", &N);

  prime();

  while(N--) {
    int number;
    scanf("%d", &number);
    if(arr[number]) {
      count++;
    }
  }

  printf("%d", count);
  return 0;
}