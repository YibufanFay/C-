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
//�ݹ鷽ʽ
#include<stdio.h>
int main()
{
	int n = 1;
	int sum = 1;
	printf("������Ҫ��Ľ׳�\n");
	scanf("%d",&n);
	sum = Fac(n);
	printf("%d", sum);
	return 0;
}

//�ǵݹ鷽ʽ
//#include<stdio.h>
//
//int main()
//{
//	int n = 1;
//	int sum = 1;
//	printf("������Ҫ��Ľ׳�\n");
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


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩