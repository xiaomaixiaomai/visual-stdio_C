#include <stdint.h>
int main(void)
{
	double a,b,c,v;

	printf("縦の辺の長さを入力してください");

	scanf("%lf",&a);

	printf("横の辺の長さを入力してください");

	scanf("%lf",&b);

	printf("高さを入力してください");

	scanf("%lf",&c);

	v=a*b*c;

	printf("3辺の体積は%fです。\n",v);

	return(0);
}

	