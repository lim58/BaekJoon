

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int d[1000000], A[100000];

int main() {
	int n;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf ("%d", &A[i]);
	}

	d[0] = A[0];

	for (int i = 1; i < n; i++) {
		if (A[i] < d[i - 1] + A[i]) {
			d[i] = d[i - 1] + A[i];
		}
		else {
			d[i] = A[i];
		}
	}
	
	int ans = d[0];
	for (int i = 0; i < n; i++) {
		if (ans < d[i]) {
			ans = d[i];
		}
	}
	printf("%d", ans);

	return 0;
}
