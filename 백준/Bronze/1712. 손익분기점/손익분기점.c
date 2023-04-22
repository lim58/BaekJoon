#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, num=0;
	scanf("%d %d %d", &a, &b, &c);

	num = (a / (c - b)) + 1;
	if (b >= c )
	{
		printf("-1");
	}
	else
	{
		printf("%d", num);
	}

	return 0;
}