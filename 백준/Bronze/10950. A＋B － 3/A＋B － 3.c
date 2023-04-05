#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, i, t, sum=0;
	scanf("%d", &t);

	for (i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}