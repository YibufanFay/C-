#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void estimate_year(int year)
{
	//�����ܱ������������ܱ�һ������
	//�����ܱ��İ�����
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		printf("%d��������",year);
	}
	else
	{
		printf("%d�겻������",year);
	}
}

int main ()
{
	int year = 0;
	
	printf("����Ҫ�жϵ�����\n");

	scanf("%d", &year);

	estimate_year(year);

	return 0;
}