#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100];
  int len, count = 0, i=0;

  scanf("%s", str);
  len = strlen(str);

  while(i < len) {
    if((str[i] == 'c') && ((str[i+1] == '=') || (str[i+1] == '-'))) {
      i += 2;
      count++;
    }
    else if (str[i] == 'd') {
      if((str[i+1] == 'z') && (str[i+2] == '=')) {
        i += 3;
        count++;
      }
      else if(str[i+1] == '-') {
        i += 2;
        count++;
      }
      else {
        i++;
        count++;
      }
    }
    else if((str[i] == 'l') && (str[i+1] == 'j')) {
      i+=2;
      count++;
    }
    else if((str[i] == 'n') && (str[i+1] == 'j')) {
      i+=2;
      count++;
    }
    else if((str[i] == 's') && (str[i+1] == '=')){
      i+= 2;
      count++;
    }
    else if((str[i] == 'z') && (str[i+1] == '=')) {
      i+=2;
      count++;
    }
    else {
      i++;
      count++;
    }
  }
  printf("%d", count);

  return 0;
}