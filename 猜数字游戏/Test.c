#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{

	printf("***************************************\n");
	printf("***************************************\n");
	printf("***********1.play  0.exit *************\n");
	printf("***************************************\n");
	printf("***************************************\n");

}

void game()
{
	//1.���������
	int guess = 0;
	int ret = rand() % 100 + 1;
	int count = 0;
	
	while (1)
	{
		printf("�����������������\n");
		count++;
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶��ˣ���\n");
			printf("һ������%d��", count);
			break;
		}

	}

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("�Ƿ������Ϸ����");
		scanf("%d", &input);

		//���������ѡ��ʹ�� switch ����
		switch (input)
		{
		default:
			printf("����������������룡��\n");
			break;
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ������\n");
			break;
		}
	} while (input);

	return 0;
}


