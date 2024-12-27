#include <stdio.h>

int main() {
  long a, b, c, hap = 1;
  scanf ("%ld %ld %ld", &a, &b, &c);

  while(b > 0) {
    if(b % 2 == 1) {
      hap = (hap * a) % c;
    }
    a = (a * a) % c;
    b /= 2;
  }

  printf ("%ld", hap);

  return 0;
}