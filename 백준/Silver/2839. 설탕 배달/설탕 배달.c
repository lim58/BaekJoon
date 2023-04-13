#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num, count=0;
    scanf("%d", &num);

    while (1)
    {
        if (num % 5 == 0)
        {
            count += num / 5;
            break;
        }
        else
        {
            num -= 3;
            count++;
        }
    }

    if (num >= 0)
    {
        printf("%d", count);
    }
    else
    {
        printf("-1");
    }
    return 0;
}