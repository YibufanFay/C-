#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�����õݹ�ķ���

//int Fibonacci(int n)
//{
//	if (n <= 2 && n > 0)
//		return 1;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}


//����ʹ�õ����ķ���

int Fibonacci(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;


	while (n >= 3)
	{
		a = b;
		b = c;
		c = a + b;
		n--;
	}

	return c;

}


int main()
{
	
	int n = 0;
	printf("����Ҫ�ڼ���쳲���������\n");
	scanf("%d",&n);

	int ret = Fibonacci(n);

	printf("%d",ret);

	return 0;
}


/*�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

		���磺

		���룺5  �����5

		���룺10�� �����55

		���룺2�� �����1
		//���n��쳲�������
		//1 1 2 3 5 8 13 21 34 55 ...
		//ǰ2�������ĺ��ǵ�������
		*/