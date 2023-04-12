#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, num, count=0;
	scanf ("%d",&n);
	num = n;
	do {
		n = (n / 10 + n % 10) % 10 + (n % 10) * 10;
		count++;
	} while (n != num);

	printf("%d", count);


	return 0;
}