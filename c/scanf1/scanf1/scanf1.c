#include<stdio.h>
int main(void)
{
	double r,a,b;

	printf("半径を1つ入力してください:");

	scanf("%lf",&r);


	a=2*r*3.1415;
	b=r*r*3.1415;

	printf("入力された実数の円周は%lfです。\n",a);
	printf("入力された実数の円の面積は%lfです。\n",b);

	return(0);
}