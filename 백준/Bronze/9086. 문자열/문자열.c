#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++) {
		char str[1001] = { 0 };
		int length = 0;
		scanf("%s", &str);
		
		for (int i = 0; str[i]; i++) {
			length++;
		}
		printf("%c%c\n", str[0], str[length-1]);
	}

	return 0;
}