#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, M, a, b, count=0, tmp=0, arr[101] = { 0 };
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}

	while (count < M) {
		scanf("%d %d", &a, &b);
		for (int i = a; i <= b; i++) {
			for (int j = i + 1; j <= b; j++) {
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}

		count++;
	}
	
	for (int i = 1; i <= N; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
