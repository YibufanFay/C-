#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int DigitSum(int n)
{

	int sum = 0;
	int ret = 0;
	if (n != 0)
	{
		int sum = n % 10;
		int ret = n / 10;
		return  sum + DigitSum(ret);
	}
	return sum;
}

int main()
{
	int n = 0;
	printf("����������\n");
	scanf("%d", &n);

	int ret = DigitSum(n);

	printf("%d", ret);

	return 0;
}


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19


