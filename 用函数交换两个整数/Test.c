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
	//ʵ��һ�������������������������ݡ�

	int m = 0;
	int n = 0;

	printf("������Ҫ��������������\n");
	
	scanf("%d %d", &m, &n);
	Swap(m, n);

	return 0;
}