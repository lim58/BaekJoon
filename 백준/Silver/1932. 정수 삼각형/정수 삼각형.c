#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main() {

	int d[501][501];
	int n=0, cost=0, maxValue=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			scanf("%d", &cost);
			d[i][j] = max(d[i - 1][j], d[i - 1][j - 1]) + cost;
			if (maxValue < d[i][j]) {
				maxValue = d[i][j];
			}
		}
	}
	printf("%d", maxValue);
	return 0;
}