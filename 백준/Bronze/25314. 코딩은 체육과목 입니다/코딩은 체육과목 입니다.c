#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N,num,i;
	scanf("%d", &N);
     
	num = N / 4;

	for (i = 1; i <= num; i++)
	{
		printf("long ");
	}
	printf("int");

	return 0;
}