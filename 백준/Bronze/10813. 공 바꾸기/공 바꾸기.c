#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N, M, i, j, tmp, arr[101] = { 0 };
	scanf("%d %d", &N, &M);

	for (int q = 1; q <= N; q++) {
		arr[q] = q;
	}

	for (int a = 0; a < M; a++) {
		scanf("%d %d", &i, &j);
		tmp = arr[j];
		arr[j] = arr[i];
		arr[i] = tmp;
	}
	for (int b = 1; b <= N; b++) {
		printf("%d ", arr[b]);
	}
	
	return 0;
}