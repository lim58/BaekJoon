#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, arr[31] = { 0 };

	for (int i = 0; i < 28; i++) {
		scanf("%d", &n);
		arr[n]++;
	}
	for (int i = 1; i <= 30; i++) {
		if (arr[i] <= 0) printf("%d\n", i);
	}

	return 0;
}