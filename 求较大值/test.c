#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	printf("������Ҫ�Ƚϵ���������\n");
	scanf("%d %d",&a,&b);
	if (a > b)
		printf("�ϴ��������%d",a);
	else
		printf("�ϴ��������%d", b);
}