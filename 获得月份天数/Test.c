#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void month_day(int month)
{
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("30\n");
    }
    if (month == 1 || month == 3 || month == 5 || month == 7
        || month == 8 || month == 10 || month == 12)
    {
        printf("31\n");
    }

}
int main()
{
    int year = 0;
    int month = 0;
    //printf("请输入年和月\n");
    //scanf("%d %d", &year, &month);
    while (scanf("%d %d", &year, &month) != EOF)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            if (month == 2)
            {
                printf("29\n");
            }
            month_day(month);
        }
        else
        {
            if (month == 2)
            {
                printf("28\n");
            }
            month_day(month);
        }
    }
    return 0;
}