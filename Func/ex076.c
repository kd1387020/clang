#include <stdio.h>
void get_sumavg(int x,int y,int *gokei,float *heikin );
main()
{
	int a, b, c,gokei;
	float heikin;
	printf("���l1 ?:");
	scanf("%d", &a);
	printf("���l2 ?:");
	scanf("%d", &b);
	get_sumavg(a, b,&gokei,&heikin);
	printf("���v��=%d�A���ς�=%.2f\n", gokei, heikin);
}
void get_sumavg(int x, int y, int* gokei, float* heikin) {
	*gokei = x + y;
	*heikin = (float)*gokei/2;
	return;
}