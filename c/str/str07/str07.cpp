#include<stdio.h>
int str_length(char str[])
{
	int length = 0;

	while(str[length] != '\0')
		length++;

	return length;
}

int main(void)
{
	char str[128];

	printf("文字列を入力してください：");
	scanf("%s",str);

	printf("文字列%sの長さは%dです．\n", str, str_length(str));
}