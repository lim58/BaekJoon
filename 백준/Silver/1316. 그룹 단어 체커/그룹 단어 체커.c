#include <stdio.h>
#include <string.h>

int main() {

  int N, answer = 0;
  char word[100];
  scanf("%d", &N);

  for(int i=0; i<N; i++) {
    scanf("%s", word);

    int len = strlen(word);
    int result = 1;
    int check[26] = { 0 };
    
    for(int j=0; j<len; j++) {
      if(j>0 && word[j] == word[j-1]) {
        continue;
      } else {
        if(check[word[j] - 'a'] > 0) {
          result = 0;
          break;
        } else {
          check[word[j] - 'a'] = 1;
        }
      }
    }
    if(result == 1) {
      answer++;
    }
  }

  printf("%d", answer);
  return 0;
}