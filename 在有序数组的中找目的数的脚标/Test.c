#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include<string.h>

int main()
{
	/*��д������һ���������������в��Ҿ����ĳ����

		Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����*/
	int arr[] = { 1,2,3,4, 5,6,7,8,9,10 };

	//�ȶ���ҪѰ�ҵ�����
	//Ȼ��Ŀ��ֵ���������������Ա�
	int i = 0;
	int k = 0;

	scanf("%d", &k);

	for (i = 0; i < 10; i++)
	{
		if (arr[i] == k)
		{
			printf("�ҵ����±�Ϊ%d",i);
			break;
		}
	
	}

	if (i == 10)
	{
		printf("�Ҳ���");
	}

	return 0;
}

//�ǵÿ������Ŀ��Ҫ�󣬲�����Ҫ���ö��ַ����ң�����

//int input = 0;
//scanf("%d", &input);
//int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//
////��֤sz����
////printf("%d", sz);

//int left = 0;
//int right = sz;

//int mid = (left + right) / 2;

//if()
