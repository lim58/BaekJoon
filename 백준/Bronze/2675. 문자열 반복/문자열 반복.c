#include <stdio.h>
#include <string.h>

int main(void) {

  int T, R, len;
  char str[20];
  scanf("%d", &T);
  
  for (int i=0; i<T; i++) {
    scanf("%d %s", &R, &str);
    len = strlen(str);
    for(int j=0; j<len; j++) {
      for(int k=0; k<R; k++) {
        printf("%c", str[j]);
      }
    }
    printf("\n");
  }
  
  return 0;
}