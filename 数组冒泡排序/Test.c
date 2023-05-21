#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	//int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };

	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	puts("请输入要排序的数字");
	for (int i = 0; i < sz; i++)
	{
		scanf("%d ", &arr[i]);
	}
	
	//printf("%d",sz);
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{          //在这的时候需要减去i，因为后i个数字已经是有序的了
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


//实现一个对整形数组的冒泡排序