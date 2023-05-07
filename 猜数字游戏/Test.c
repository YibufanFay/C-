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
	//1.生成随机数
	int guess = 0;
	int ret = rand() % 100 + 1;
	int count = 0;
	
	while (1)
	{
		printf("请输入所猜想的数字\n");
		count++;
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了！！\n");
			printf("一共猜了%d次", count);
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
		printf("是否进行游戏：）");
		scanf("%d", &input);

		//进行情况的选择使用 switch 函数
		switch (input)
		{
		default:
			printf("输入错误，请重新输入！！\n");
			break;
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！！！\n");
			break;
		}
	} while (input);

	return 0;
}


