#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int judge_number(int k)
{
	int j = 0;
	for (j = 2; j < sqrt(k); j++)
	{
		if (k % j == 0)
		{
			return 0;
			//在此时如果能被任意一个数整除
			//就代表不是素数
			//则返回 0 了
		}

	}
	
	return 1;
}

int main()
{

	/*实现一个函数，判断一个数是不是素数。
		利用上面实现的函数打印100到200之间的素数*/
	int k = 0; 
	printf("cehsi ");
	int i = 0;
	for (i = 100; i < 201; i++)
	{
		int ret = judge_number(i);
		if (ret == 1)
		{
			printf("%d ", i);

		}

	}
	/*judge_number(k);*/

	return 0;
}

//
//int isPrime(int n)
//{
//	int i = 0;
//	if (n == 1)
//		return 0;
//	for (i = 2; i <= n; ++i)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//void main()
//{
//	int j;
//	for (j = 100; j <= 200; ++j)
//	{
//		int ret = isPrime(j);
//		if (ret == 1)
//			printf("%d", j);
//	}
//}