#include<stdio.h>
int main(void)
{
	int a;

	printf("整数を1つ入力してください:");

	scanf("%d",&a);

	a=a*a;

	printf("入力された整数の2乗は%dです。\n",a);

	return(0);
}