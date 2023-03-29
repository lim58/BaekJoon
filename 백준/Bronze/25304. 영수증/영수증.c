#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int X, N, a, b, i, hap=0;
	scanf("%d %d", &X, &N);

	for (i = 1; i <= N; i++)
	{
		scanf("%d %d", &a, &b);
		hap = hap + (a * b);
	}
	if (X == hap)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	

	return 0;
}