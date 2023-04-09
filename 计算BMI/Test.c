#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int a, b;
    float c, d;
    //记得将c d 的数据类型
    //不能使用int
    scanf("%d %d", &a, &b);
    c = b / 100.0; 
    c *= c;
    //d = a / (c * c);
    d = a / c;
    printf("%0.2f", d);
    //两位小数的形式
    return 0;
}