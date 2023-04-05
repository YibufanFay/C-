#include<stdio.h>
int main()
{
	//什么时候能够敲到两万行代码呢？
	int line = 0;
	printf("敲代码两万行\n");
	while (line <= 20000)
	{
		printf("敲两万行代码:%d\n", line);
		line++;
	}
	if (line >= 20000)
		printf("有一个好的offer\n");
	//希望在本科期间可以实现吧！
	return 0;
}