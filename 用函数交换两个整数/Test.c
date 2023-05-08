#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
 
void Swap(int *m,int *n)
{
	int tmp = 0;
	tmp = n;
	n = m;
	m = tmp;
	printf("%d %d", m, n);
}

int main()
{
	//实现一个函数来交换两个整数的内容。

	int m = 0;
	int n = 0;

	printf("请输入要交换的两个数字\n");
	
	scanf("%d %d", &m, &n);
	Swap(m, n);

	return 0;
}