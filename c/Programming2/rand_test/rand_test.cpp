#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int i;
	int a;

	/* RAND_MAXの確認 */
	//printf("%d\n",RAND_MAX);

	/* 乱数のseedを与える */
	srand(time(NULL));

	/* 乱数を5回生成する */
	for(i=0;i<10;i++)
	{
		a = rand()%4;
		if(a==0)      printf("上\n");
		else if(a==1) printf("右\n");
		else if(a==2) printf("下\n");
		else if(a==3) printf("左\n");
	}

	return 0;
}