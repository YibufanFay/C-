#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	int year = 0;

	for (year = 1000; year < 2001; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	    //Ҫʹ��ģ % ������ /
		//������жϷ�����
		//�ܱ�������ȴ���ܱ�һ������
		//�ܱ��İ�����
		{
			printf("%d ",year);
		}
	}
	return 0;
}