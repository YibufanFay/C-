#include<stdio.h>
int main()
{
	int input = 0;
	printf("ѡ������\n");
	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>:");
	scanf_s("%d", &input);
	if (input == 1)
		printf("����һ����offer");
	else
		printf("�ؼ�������");
	return 0;
}