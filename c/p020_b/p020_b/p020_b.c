#include<stdio.h>
int main(void)
{
	int a;

	printf("整数を1つ入力してください");
	scanf("%d",&a);

	if(a>=0 && a<=100){
		printf("範囲内\n");
	}
	else{
		printf("範囲外\n");
	}
	return(0);
}