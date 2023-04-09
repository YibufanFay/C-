#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入要比较的两个数字\n");
	scanf("%d %d",&a,&b);
	if (a > b)
		printf("较大的数字是%d",a);
	else
		printf("较大的数字是%d", b);
}