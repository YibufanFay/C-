#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	//int i = 1;
	for (n = 100; n < 201; n++)
	{
		int i = 1;
		for (i = 2; i < sqrt(n); i++)
		{
			if (n % i == 0)
			{
				break;
			}
		}
		if (i > sqrt(n))
		{
			printf("%d ", n);
		}
	}
	return 0;
}

