#include <stdio.h>

int top = -1;

void push(int arr[], int number) {
  top++;
  arr[top] = number;
}

void pop(int arr[]) {
  if(top >= 0) {
    arr[top] = 0;
    top--;
  }
}

int main() {
  int K;
  scanf("%d", &K);

  int input, arr[K], sum=0;

  while(K--) {
    scanf("%d", &input);

    if(input == 0) {
      pop(arr);
    } else {
      push(arr, input);
    }
  }

  for(int i=0; i<=top; i++) {
    sum += arr[i];
  }

  printf("%d", sum);

  return 0;
}