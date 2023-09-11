#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n, d[10000000];
    scanf("%d", &n);

    d[1] = 0;
    for (int i = 2; i <= n; i++) {
        d[i] = d[i - 1] + 1;
        
        if (i % 2 == 0 && d[i] > d[i / 2] + 1) {
            d[i] = d[i / 2] + 1;
        }
        
        if (i % 3 == 0 && d[i] > d[i / 3] + 1) {
            d[i] = d[i / 3] + 1;
        }
    }
    printf("%d", d[n]);

    return 0;
}