#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	char a;
	scanf(" %c", &a);
	
	if ((0 <= a) && (a < 10)) {
		printf("%d", a + 48);
	}
	else {
		printf("%d", a);
	}

	return 0;
}