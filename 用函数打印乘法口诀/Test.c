#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Multi( int input)
{
	int i = 0;

	for (i = 1; i <= input; i++)
	{

		int j = 0;
		for (j = 1; j <= i; j++)
		{
			int t = i * j;
			printf("%2d * %2d = %2d ",i ,j,t);

		}
		printf("\n");

	}

}

int main()
{
	int input = 0;

	printf("请输入你想打印的乘法表\n");
	scanf("%d", &input);
	
	Multi(input);

	return 0;
}