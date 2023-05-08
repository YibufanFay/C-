#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void estimate_year(int year)
{
	//闰年能被四整除而不能被一百整除
	//或者能被四百整除
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		printf("%d年是闰年",year);
	}
	else
	{
		printf("%d年不是闰年",year);
	}
}

int main ()
{
	int year = 0;
	
	printf("输入要判断的闰年\n");

	scanf("%d", &year);

	estimate_year(year);

	return 0;
}