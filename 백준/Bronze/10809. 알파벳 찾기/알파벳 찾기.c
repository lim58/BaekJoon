#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	
	char s[100], str[26];
	scanf("%s", &s);

	for (int i = 0; i < 26; i++) {
		str[i] = -1;
	}

	int len = strlen(s);

	for (int i = 0; i < len; i++) {
		if (str[s[i] - 97] == -1) {
			str[s[i] - 97] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", str[i]);
	}

	return 0;
}