#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int  main()
{
	
	//��������
	//��һ���ŵ�
	//9 19 29 39 49 59 69 79 89  
	// ��Ҫ����ʮλ��Ϊ�ŵ���� 90 91 92 93 94 95 96 97 98  
	//�������ŵ�
	//99
	//�ܼƹ���11����
	int i = 0;
	int count = 0;
	for (i = 1; i < 101; i++)
	{

		//if (i % 10 == 9)
		//�����Ż�
		//�������

		if ((9 == i % 10) || (9 == i / 10))
		{
			count++;
		}

		if ((9 == i % 10) && (9 == i / 10))
		{
			count++;
		}
		//continue;
	    /*if (9 == i % 10)
		{
			count++;
		}

		if (9 == i / 10)
		{
			count++;
		}*/

	}

	printf("%d", count);

	return 0;
}
