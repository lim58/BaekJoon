#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int d[11];
int hap(int n) {
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;

    for (int i = 4; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i - 2] + d[i - 3];
    }
    return d[n];
}

int main()
{
    int T, num;
    scanf("%d", &T);
    for (int k = 0; k < T; k++)
    {
        scanf("%d", &num);
        printf("%d\n", hap(num));

    }
    return 0;
}