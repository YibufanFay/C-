#include<stdio.h>
int main()
{
	int input = 0;
	printf("选择计算机\n");
	printf("你要好好学习吗？（1/0）>:");
	scanf_s("%d", &input);
	if (input == 1)
		printf("给你一个好offer");
	else
		printf("回家卖红薯");
	return 0;
}