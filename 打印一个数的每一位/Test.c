#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Print(int n)
{
	int t = n / 10;
	if (n == 0)
		return;
	
	if (t != 0)
	{
		int s = n % 10;
		Print(t);
		printf("%d ",s);
		
	}
	/*else
	{
		printf("%d ", n);
	}*/
	return 0;
}


int main ()
{
	int input = 0;
	printf("������Ҫ��ӡ������\n");
	scanf("%d",&input);
	Print(input);
	return 0;
}


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}