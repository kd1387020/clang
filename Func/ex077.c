#include <stdio.h>
void get_sumavg(int x,int y,int z,int *max,int *min );
main()
{
	int a, b, c,max,min;
	printf("数値1 ?:");
	scanf("%d", &a);
	printf("数値2 ?:");
	scanf("%d", &b);
	printf("数値3 ?:");
	scanf("%d", &c);
	get_sumavg(a, b,c,&max,&min);
	printf("最大値は=%d、最小値は=%d\n", max, min);
}
void get_sumavg(int x, int y, int z,int * max,int * min) {
	*min=(x > y) ? (y > z ? z : y) : (x > z ? z : x);
	*max=(x > y) ? (x > z ? x : z) : (y > z ? y : z);
	return;
}