#include <stdio.h>
#include <string.h>

int main() {
  int T;
  scanf("%d", &T);

  while(T--) {
    int top = 0, answer = 0;
    char arr[50] = { 0 }, check[50] = { 0 };
    scanf("%s", arr);

    for(int i = 0; i < strlen(arr); i++) {
      switch (arr[i]) {
        case '(':
          check[top] = arr[i];
          top++;
          break;
        case ')':
          if(top == 0 || check[top - 1] != '(') {
            answer = 1;
            break;
          }
          top--;
          check[top] = 0;
          break;
      }
    }
    
    if(top != 0) {
      answer = 1;
    }

    if(answer) {
      printf("NO\n");
    } else {
      printf("YES\n");
    }
  }

  return 0;
}
