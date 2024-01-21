#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[101];
	int length = 0;
	scanf("%s", &str);

	for (int i = 0; str[i]; i++) {
		length++;
	}
	
	printf("%d", length);

	return 0;
}