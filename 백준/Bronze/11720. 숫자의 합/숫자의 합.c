#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	char str[101] = { 0 };
	int N, sum=0;

	scanf("%d", &N);
	scanf("%s", &str);

	for (int i = 0; i < N; i++) {
		sum += str[i]-48;
	}
	printf("%d", sum);

	return 0;
}