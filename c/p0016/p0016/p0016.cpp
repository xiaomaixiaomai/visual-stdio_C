#include<stdio.h>
int main(void)
{
	char m,n;
	m=65;
	m=0x41;
	m='A';
	printf("%c\n",m);

	m='B';
	printf("%c\n",m-'A'+'a');

	m='d';
	printf("%c\n",m-'a'+'A');

	printf("大文字の英字を１つ入力してください：");
	scanf("%c",&m);
	printf("%cの小文字は%cです\n",m,m-'A'+'a');

	fflush(stdin);
	printf("小文字の英字を１つ入力してください：");
	m=getchar();    /* scanf("%c",&m);*/
	printf("%cの大文字は%cです\n",n,n-'a'+'A');

	return(0);
}

	

	
	