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
	printf("请输入数字\n");
	scanf("%d", &n);

	int ret = DigitSum(n);

	printf("%d", ret);

	return 0;
}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19


