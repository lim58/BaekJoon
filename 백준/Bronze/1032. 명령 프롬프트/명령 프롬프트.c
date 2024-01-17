#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int num;
	char arr[50][51];
	char pattern[51];

	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		scanf("%s", &arr[i]);
	}

	for (int i = 0; i < strlen(arr[0]); i++) {
		for (int j = 0; j < num; j++) {
			pattern[i] = arr[j][i];
			if (j > 0 && arr[j][i] != arr[j - 1][i]) {
				pattern[i] = '?';
				break;
			}
		}
	}
	printf("%s\n", pattern);
	return 0;
}