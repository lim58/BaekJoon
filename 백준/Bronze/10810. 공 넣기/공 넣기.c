#include <stdio.h>

int main() {

	int N, M, i, j, k, arr[101] = { 0 };
	scanf("%d %d", &N, &M);

	for (int a = 0; a < M; a++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int b = i; b <= j; b++) {
			arr[b] = k;
		}
	}
	for (int c = 1; c <= N; c++) {
		printf("%d ", arr[c]);
	}

	return 0;
}