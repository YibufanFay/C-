#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (N=1;N<=10;N++)
	{
		ret = ret * N;
		sum = sum + ret;
		//这方法，我只能说是无敌
		//真的好妙啊！！！
     }
	/*for (N = 1; N <= 10; N++)
	{
		ret = 1;
		for (i = 2; i <= N; i++)
		{
			ret = ret * i;
			
		}
		sum = sum + ret;
	}*/

	printf("sum=%d\n",sum);
	return 0;
}