#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int sqr_num(int i, int j)
{
	if (j <= 0)
		return 1;
	else
		return i * sqr_num(i , j - 1);
}

int main()
{
	/*编写一个函数实现n的k次方，使用递归实现。*/
	printf("请输入要求平方的数字\n");
	int i = 0;
	int j = 0;
	scanf("%d %d",&i,&j);		
	int sum = 0;
	sum = sqr_num(i, j);

	printf("%d\n", sum);

	return 0;
}



//#include<stdio.h>
// 
//
//int power(int n, int k)
//{
//	if (k <= 0)
//		return 1;
//	else
//		return n * power(n, k - 1);
//}
//int main()
//{
//	int n = 3;
//	int k = 2;
//	scanf("%d %d", &n, &k);
//	int ret = power(n, k);
//	printf("%d\n", ret);
//	
//	return 0;
//}