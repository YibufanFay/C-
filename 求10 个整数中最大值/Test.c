#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int arr[10] = { 0 };

	int i = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	int Max = 0;
	Max = arr[0];

	for (i = 1; i < 10; i++)
	{

		if (arr[i] > Max)
		{
			Max = arr[i];
		}

	}
	
	printf("%d",Max);

	return 0;
}




//2.开始比较
	/*if (arr[i]>arr[i+1])
	{
		int tmp = arr[i + 1];
		arr[i] = arr[i + 1];
		arr[i + 1] = arr[i];

	}*/