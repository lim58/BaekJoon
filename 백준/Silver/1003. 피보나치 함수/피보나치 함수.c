#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int T, num, answer[41] = { 0, 1};
	for (int i = 2; i < 41; i++) {
		answer[i] = answer[i - 1] + answer[i - 2];
	}
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &num);
		if (num <= 0)  printf("1 0\n");
		else printf("%d %d\n", answer[num - 1], answer[num]);
	}

	return 0;
}
