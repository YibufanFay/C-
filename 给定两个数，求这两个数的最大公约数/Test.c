#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	printf("请输入两个数字\n");
//	scanf("%d %d", &m, &n);
//	if (m < n)
//	{
//		int tmp = n;
//		n = m;
//		m = tmp;
//	}
//	for (n; n > 0; n--)
//	{
//		t = n;
//		if (m % n == 0) 
//		{
//			if (t % n == 0)
//			{
//				printf("%d", n);
//		    }
//					
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数字\n");
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d是最大公约数", b);
//}
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int t = 0;
	printf("请输入两个数字\n");
	scanf("%d %d", &m, &n);
	while (t = m % n)
	{
		m = n;
		n = t;
	}
	printf("%d是最大公约数", n);
}