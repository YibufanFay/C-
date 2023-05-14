#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


void reverse_string(char* string)
{
	if (*string != '\0')
	{
		string++;
		reverse_string(string);
		printf("%c",*(string-1));
	}
}

int main()
{
	char* string = "abcderf";	

	reverse_string(string);

	return 0;
}


//编写一个函数 reverse_string(char* string)（递归实现）
//
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//
//要求：不能使用C函数库中的字符串操作函数。
//
//比如 :
//
//char arr[] = "abcdef";
//
//
//逆序之后数组的内容变成：fedcba.


//
//char* string[100] = "a";
//for (int i = 1; i < 101; i++)
//{
//	scanf("%c", &string[i]);
//}
///*printf("请输入 要反向排列的字符串 \n");*/