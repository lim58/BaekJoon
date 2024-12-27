#include <stdio.h>

int main() {
  long long a, b, c, hap = 1;
  scanf ("%lld %lld %lld", &a, &b, &c);

  a = a % c;

  while(b > 0) {
    if(b % 2 == 1) {
      hap = (hap * a) % c;
    }
    a = (a * a) % c;
    b /= 2;
  }

  printf ("%lld", hap);

  return 0;
}