#include<stdio.h>
int main(void)
{
	double x,v,t;
	int m;

	printf("距離を入力してください");

	scanf("%lf",&x);

	printf("速さ（時速）を入力してください");

	scanf("%lf",&v);

	t=x/v;
	m=(int)(60.0*t+0.5);


	

	
	printf("%f[km]の道のりを時速%f[km/h]の速さで歩くと%d[時間]%d[分]かかる。",x,v,m/60,m%60);

	return(0);
}
