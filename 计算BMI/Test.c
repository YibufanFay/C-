#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int a, b;
    float c, d;
    //�ǵý�c d ����������
    //����ʹ��int
    scanf("%d %d", &a, &b);
    c = b / 100.0; 
    c *= c;
    //d = a / (c * c);
    d = a / c;
    printf("%0.2f", d);
    //��λС������ʽ
    return 0;
}