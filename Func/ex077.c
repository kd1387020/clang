#include <stdio.h>
void get_sumavg(int x,int y,int z,int *max,int *min );
main()
{
	int a, b, c,max,min;
	printf("���l1 ?:");
	scanf("%d", &a);
	printf("���l2 ?:");
	scanf("%d", &b);
	printf("���l3 ?:");
	scanf("%d", &c);
	get_sumavg(a, b,c,&max,&min);
	printf("�ő�l��=%d�A�ŏ��l��=%d\n", max, min);
}
void get_sumavg(int x, int y, int z,int * max,int * min) {
	*min=(x > y) ? (y > z ? z : y) : (x > z ? z : x);
	*max=(x > y) ? (x > z ? x : z) : (y > z ? y : z);
	return;
}