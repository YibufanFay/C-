#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	printf("������Ҫ�������������\n");
	scanf("%d %d %d",&i,&j,&k);
	if (i < j)
	{
		int tmp = 0;
		tmp = j;
		j = i;
		i = tmp;
	}
	
	if (i < k)
	{
		int tmp = 0;
		tmp = k;
		k = i;
		i = tmp;
	}
	//��Ҫ�Ƚ�i�����µ���ֵ��Ƚ�
	//�ڴ�֮�������ν�i��һλ�����������µ�������Ƚ�
	

	if (j < k)
	{
		int tmp = 0;
		tmp = k;
		k = j;
		j = tmp;
	}
	
	/*if (i < k)
	{
		int tmp = 0;
		tmp = k;
		k = i;
		i = tmp;
	}*/

	printf("�źõ�˳����%d %d %d", i, j, k);
	return 0;
}
//#include<stdio.h>  
//#include <stdlib.h>
//
//int main()
//{
//	int a, b, c, t;
//	printf("��������������\n");
//	scanf("%d%d%d", &a, &b, &c);
//
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}
