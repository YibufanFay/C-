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
			//�ڴ�ʱ����ܱ�����һ��������
			//�ʹ���������
			//�򷵻� 0 ��
		}

	}
	
	return 1;
}

int main()
{

	/*ʵ��һ���������ж�һ�����ǲ���������
		��������ʵ�ֵĺ�����ӡ100��200֮�������*/
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