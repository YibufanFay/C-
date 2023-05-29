#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int input = 0;
	int count = 0;
	puts("请输入要计算的数字");
	scanf("%d",&input);
	
	for (int i = 0; i < 32; i++)
	{
		if ((input & (1 << i)) != 0)
		{
			count++;
		}
	}
	
	printf("%d",count);

	return 0;
}

//while (input != 0 )
	//{
	//	//if (input >> 1 == 1)
	//	if((input & (1 << i)) !=0)
	//	{
	//		count++;
	//	}
	//}