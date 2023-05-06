#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    
    int i = 1;
    long long sum = 1;
    scanf("%d", &i);
    while (i > 1)
    {
        sum = sum + i;
        i--;
    }
    printf("%lld", sum);
    return 0;
}