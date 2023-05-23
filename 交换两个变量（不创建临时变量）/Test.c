#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	printf("请输入要比较的数字\n");
	scanf("%d %d",&m,&n);
	m = m ^ n;
	n = n ^ m;
	m = m ^ n;

	printf("%d %d", m, n);
	return 0;
}

//不允许创建临时变量，交换两个整数的内容
