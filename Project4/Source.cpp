#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	c = a + b;
	if (c > 0)
	{
		printf("%d>0", c);
	}
	else if (c < 0)
	{
		printf("%d<0", c);
	}
	else
	{
		printf("%d=0", c);
	}
	return 0;
}