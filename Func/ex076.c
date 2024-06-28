#include <stdio.h>
void get_sumavg(int x,int y,int *gokei,float *heikin );
main()
{
	int a, b, c,gokei;
	float heikin;
	printf("数値1 ?:");
	scanf("%d", &a);
	printf("数値2 ?:");
	scanf("%d", &b);
	get_sumavg(a, b,&gokei,&heikin);
	printf("合計は=%d、平均は=%.2f\n", gokei, heikin);
}
void get_sumavg(int x, int y, int* gokei, float* heikin) {
	*gokei = x + y;
	*heikin = (float)*gokei/2;
	return;
}