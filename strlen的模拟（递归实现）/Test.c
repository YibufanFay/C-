#define _CRT_SECURE_NO_WARNINGS 1

int my_strlen(char* string)
{
	if (*string != '\0')
	{
		return 1 + my_strlen(string+1);
	}
	return 0;

}

//非递归实现
//int my_strlen(char* string )
//{
//
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//
//	return count;
//}

#include<stdio.h>
int main()
{
	char string[] = "abc";
	int len = my_strlen(string);
	printf("%d", len);	                                                                                                                                                                                                                                                                                                                                                                                                                      
	return 0;
}

//递归和非递归分别实现strlen











