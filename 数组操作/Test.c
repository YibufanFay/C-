#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void init(int arr[],int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	for (int i  = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
 
//void print(int arr[], int sz)
//{
//	for (sz = 0; sz < 10; sz++)
//	{
//		printf("%d ",arr[sz]);
//	}
//	printf("\n");
//}
//Ϊ��ʹ���������ͨ����
//��Ҫ�� sz ֱ����Ϊѭ������
 
void reverse(int arr[], int sz)
{
	for (int i = 0; i < sz/2; i++)
	{
		int tmp = arr[i];
		arr[i] = arr[sz - i - 1];
		arr[sz - i - 1] = tmp;
		//������ʱ�����м����
		//���ҽ�����ֳ�����
		//������з���
	}
	print(arr, sz);
}

int main()
{
	int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	//init(arr,sz);
	print(arr, sz);
	reverse(arr,sz);

	return 0;
}

//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��




