#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d:%d %d", &a, &b, &c);
    a = (a + ( c + b) / 60 )% 24;
    b =  (c + b) % 60;
    printf("%02d:%02d", a, b);
    return 0;
}