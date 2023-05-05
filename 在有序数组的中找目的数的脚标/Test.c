#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include<string.h>

int main()
{
	/*编写代码在一个整形有序数组中查找具体的某个数

		要求：找到了就打印数字所在的下标，找不到则输出：找不到。*/
	int arr[] = { 1,2,3,4, 5,6,7,8,9,10 };

	//先读入要寻找的数字
	//然后将目标值与数组中数字作对比
	int i = 0;
	int k = 0;

	scanf("%d", &k);

	for (i = 0; i < 10; i++)
	{
		if (arr[i] == k)
		{
			printf("找到了下标为%d",i);
			break;
		}
	
	}

	if (i == 10)
	{
		printf("找不到");
	}

	return 0;
}

//记得看清楚题目的要求，并不是要求用二分法查找！！！

//int input = 0;
//scanf("%d", &input);
//int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//
////验证sz长度
////printf("%d", sz);

//int left = 0;
//int right = sz;

//int mid = (left + right) / 2;

//if()
