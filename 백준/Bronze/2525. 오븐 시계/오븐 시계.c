#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, m, sum, time=0;
	scanf("%d %d %d", &h, &m, &sum);

	time = (h * 60) + m + sum;

	h = (time / 60) % 24;
	m = time % 60;

	printf("%d %d", h, m);
	
	


	return 0;
}