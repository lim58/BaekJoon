#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int T, x, y, count = 0, arr[100][100] = { 0 };
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &x, &y);
		
		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				arr[i][j]++;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (arr[i][j] > 0) count++;
		}
	}
	printf("%d", count);


	return 0;
}