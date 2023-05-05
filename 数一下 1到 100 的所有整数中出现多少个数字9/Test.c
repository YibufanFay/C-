#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int  main()
{
	
	//分析问题
	//有一个九的
	//9 19 29 39 49 59 69 79 89  
	// 不要忘记十位数为九的情况 90 91 92 93 94 95 96 97 98  
	//有两个九的
	//99
	//总计共有11个九
	int i = 0;
	int count = 0;
	for (i = 1; i < 101; i++)
	{

		//if (i % 10 == 9)
		//稍作优化
		//避免错误

		if ((9 == i % 10) || (9 == i / 10))
		{
			count++;
		}

		if ((9 == i % 10) && (9 == i / 10))
		{
			count++;
		}
		//continue;
	    /*if (9 == i % 10)
		{
			count++;
		}

		if (9 == i / 10)
		{
			count++;
		}*/

	}

	printf("%d", count);

	return 0;
}
