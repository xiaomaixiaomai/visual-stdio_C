#include <stdio.h>

int main(void)
{
	double x,y,z;

	printf("１つ目の実数を入力してください");
	scanf("%lf",&x);
	
	printf("２つ目の実数を入力してください");
	scanf("%lf",&y);

	z=(-3*x+y)/8*y;
	
	printf("z=%9.3f",z);
	return(0);
}