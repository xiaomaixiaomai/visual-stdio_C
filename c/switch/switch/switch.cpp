#include<stdio.h>

int main(void)
{
	char c;

	printf("a〜dの文字を入力してください\n");
	scanf("%c",&c);

	switch(c)
	{
	   case 'd':
		   printf("*");
	   case'c':
		   printf("*");
	   case'b':
		   printf("*");
	   case 97:
		   printf("*");
		   break;
	   default:
		   printf("不正な文字が入力されました\n");
		   break;

	}
	return 0;
}