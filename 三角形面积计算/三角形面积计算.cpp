#include<stdio.h>
#include<math.h>
int main(void)
{
	float a, b, c, s, area;
	printf("Input a,b,c:");
	scanf_s("%f,%f,%f", &a, &b, &c);
	s = (a + b + c) / 2;
	area = (float)sqrt(s * (s - a) * (s - b)*(s - c));
	printf("area=%f/n", area);
	return 0;
}