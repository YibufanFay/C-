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


//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//���� :
//
//char arr[] = "abcdef";
//
//
//����֮����������ݱ�ɣ�fedcba.


//
//char* string[100] = "a";
//for (int i = 1; i < 101; i++)
//{
//	scanf("%c", &string[i]);
//}
///*printf("������ Ҫ�������е��ַ��� \n");*/