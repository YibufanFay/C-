#include<stdio.h>
int main()
{
	//ʲôʱ���ܹ��õ������д����أ�
	int line = 0;
	printf("�ô���������\n");
	while (line <= 20000)
	{
		printf("�������д���:%d\n", line);
		line++;
	}
	if (line >= 20000)
		printf("��һ���õ�offer\n");
	//ϣ���ڱ����ڼ����ʵ�ְɣ�
	return 0;
}