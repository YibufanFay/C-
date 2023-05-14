#define _CRT_SECURE_NO_WARNINGS 1

int Fac(int n)
{
	if (n > 0 )
	{
		int sum = n * Fac(n - 1);
		return sum;
	}
	return 1;
}
//递归方式
#include<stdio.h>
int main()
{
	int n = 1;
	int sum = 1;
	printf("请输入要求的阶乘\n");
	scanf("%d",&n);
	sum = Fac(n);
	printf("%d", sum);
	return 0;
}

//非递归方式
//#include<stdio.h>
//
//int main()
//{
//	int n = 1;
//	int sum = 1;
//	printf("请输入要求的阶乘\n");
//	scanf("%d",&n);
//	for (int i = n; i> 1; i--)
//	{
//		sum = sum * i;
//
//	}
//	printf("%d",sum);
//
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）