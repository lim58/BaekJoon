#include <stdio.h>

int square(int num) {
  return num * num;
}

int main() {
  while(1) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a == 0 && b == 0 && c == 0) {
      break;
    }

    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    int min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    int middle = a + b + c - max - min;

    if(square(min) + square(middle) == square(max)) {
      printf("right\n");
    } else {
      printf("wrong\n");
    }
  }

  return 0;
}