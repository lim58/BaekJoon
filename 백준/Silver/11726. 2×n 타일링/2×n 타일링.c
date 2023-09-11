#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int d[1001];
int square (int num) {
    d[1] = 1;
    d[2] = 2;

    for (int i = 3; i <= num; i++)
    {
        d[i] = (d[i - 1]%10007) + (d[i - 2]%10007);
    }
    return d[num]%10007;
}

int main() {

    int n;
    scanf("%d", &n);
    printf("%d", square(n));

    return 0;
}