#include <stdio.h>
#include <string.h>

int main(void) {
  int len, answer=1;
  char str[101];
  scanf("%s", str);

  len = strlen(str);
  for(int i=0; i<len/2+1; i++) { 
    if(str[i] != str[len-i-1]) answer = 0;
  }
  printf("%d", answer);

  return 0;
}