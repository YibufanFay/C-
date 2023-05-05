#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	double t = 2;
	double sum = 0;
	for (n = 1; n < 101; n++)
	{
		
		if (n % 2 == 0)
			t = -1;
		if (n % 2 == 1)
			t = 1;
		float x = 1.0 / n;
		sum =sum + t*x;
	
	}
	printf("%lf",sum);

	return 0;
}