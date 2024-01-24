#include <stdio.h>
#include <string.h>

int main(void) {
  char answer, str[1000000];
  int len, max=0, arr[26] = {0};
  scanf("%s", str);

  len = strlen(str);

  for(int i=0; i<len; i++) {
    if(str[i] > 64 && str[i] < 91) {
      arr[str[i] - 65]++;
    }
    else if(str[i]>96 && str[i] < 123) {
      arr[str[i] - 97]++;
    }
  }
  
  for(int i=0; i<26; i++) {
    if(max < arr[i]) {
      max = arr[i];
      answer = i + 65;
    }
    else if (max>0 && max == arr[i]) {
      answer = '?';
    }
  }
  printf("%c", answer);
  
  return 0;
}