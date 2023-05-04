#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	int year = 0;

	for (year = 1000; year < 2001; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	    //要使用模 % 而不是 /
		//闰年的判断方法是
		//能被四整除却不能被一百整除
		//能被四百整除
		{
			printf("%d ",year);
		}
	}
	return 0;
}