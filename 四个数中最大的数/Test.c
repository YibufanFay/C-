#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int arr[4] = { 0 };
    int i = 0;
    int k = 1;
    
    for (i = 0; i < 4; i++)
    {
         scanf("%d", &arr[i]);
    }

    int max = arr[0];

    while (k < 4)
    {
        for (int j = 0; j < 4; j++)
        {
            if (max <= arr[j])
            {
                max = arr[j];
            }
        }
        k++;
    }

    printf("%d", max);

    return 0;
}