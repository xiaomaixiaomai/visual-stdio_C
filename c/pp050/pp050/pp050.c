#include<stdio.h>
int main(void)
{
	int a,b,max;

	printf("1つ目の整数を入力してください");
	scanf("%d",&a);
	printf("2つ目の整数を入力してください");
	scanf("%d",&b);

	if(a>b){
		max=a;	
	}
	else{
		max=b;
	}
	printf("max=%d",max);
	return(0);
}