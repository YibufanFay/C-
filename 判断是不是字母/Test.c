#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    char a;
    while ((a = getchar()) != EOF)
    {
        getchar();
        if (a >= 'A' && a <= 'z')
        {
            printf("%c is an alphabet.\n", a);
        }
        else
        {
            printf("%c is not an alphabet.\n", a);

        }

    }

    return 0;
}