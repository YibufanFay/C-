#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	//int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };

	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	puts("������Ҫ���������");
	for (int i = 0; i < sz; i++)
	{
		scanf("%d ", &arr[i]);
	}
	
	//printf("%d",sz);
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{          //�����ʱ����Ҫ��ȥi����Ϊ��i�������Ѿ����������
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}


//ʵ��һ�������������ð������