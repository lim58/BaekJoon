#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	printf("%d\n", num1 * (num2 % 10));
	printf("%d\n", num1 * ( (num2 % 100) - (num2 % 10) )/10 );
	printf("%d\n", num1 * (num2/100));
	printf("%d", num1 * num2);
	

	return 0;
}