#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//这是用递归的方法

//int Fibonacci(int n)
//{
//	if (n <= 2 && n > 0)
//		return 1;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}


//这是使用迭代的方法

int Fibonacci(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;


	while (n >= 3)
	{
		a = b;
		b = c;
		c = a + b;
		n--;
	}

	return c;

}


int main()
{
	
	int n = 0;
	printf("你想要第几个斐波那契数？\n");
	scanf("%d",&n);

	int ret = Fibonacci(n);

	printf("%d",ret);

	return 0;
}


/*递归和非递归分别实现求第n个斐波那契数

		例如：

		输入：5  输出：5

		输入：10， 输出：55

		输入：2， 输出：1
		//求第n个斐波那契数
		//1 1 2 3 5 8 13 21 34 55 ...
		//前2个的数的和是第三个数
		*/