#include <stdio.h>
#include <string.h>

int main() {
    int N, answer = 0;
    scanf("%d", &N);

    while (N--) {
        char word[100];
        scanf("%s", word);
        
        int check[26] = { 0 };
        int valid = 1;

        for (int i = 0; word[i] != '\0'; i++) {
            if (i > 0 && word[i] == word[i - 1]) continue;

            if (check[word[i] - 'a']) {
                valid = 0;
                break;
            }
            check[word[i] - 'a'] = 1;
        }

        answer += valid;
    }

    printf("%d\n", answer);
    return 0;
}
