#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[1001];
	int num;
	scanf("%s %d", &str, &num);

	printf("%c", str[num-1]);

	return 0;
}