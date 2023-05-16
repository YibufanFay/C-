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
//为了使代码更具有通用性
//不要将 sz 直接作为循环参数
 
void reverse(int arr[], int sz)
{
	for (int i = 0; i < sz/2; i++)
	{
		int tmp = arr[i];
		arr[i] = arr[sz - i - 1];
		arr[sz - i - 1] = tmp;
		//在这里时引入中间变量
		//并且将数组分成两半
		//对其进行分组
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

//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。




