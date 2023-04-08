#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int h, m, s, sum;
	scanf("%d",&sum);
	h = sum / 60 / 60;
	m = sum / 60 % 60;
	//'/'的优先级大于'%'
	s = sum % 60;
	printf("%d %d %d",h,m,s);
	return 0;
}