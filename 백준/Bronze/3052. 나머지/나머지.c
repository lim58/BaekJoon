#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, count = 0, arr[1001] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		arr[n % 42]++;
	}
	for (int i = 0; i < 1001; i++) {
		if (arr[i] > 0) count++;
	}
	printf("%d", count);

	return 0;
}