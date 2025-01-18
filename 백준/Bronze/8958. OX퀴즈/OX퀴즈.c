#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);

  while(N--) {
    int result = 0, count = 0;
    char str[80] = { 0 };
    scanf("%s", str);

    for(int i=0; str[i]!='\0'; i++) {
      if(str[i] == 'O') {
        count++;
        result += count;
      } else {
        count = 0;
      }
    }
    printf("%d\n", result);
  }

  return 0;
}
