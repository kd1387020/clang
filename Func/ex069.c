#include <stdio.h>
main()
{
	int a,sum=0,su=0;

	printf("®”:");
	while (scanf("%d",&a) != EOF) {
		sum += a;
		su++;
		printf("®”:");
	}
	printf("‡Œv=%d •½‹Ï=%.2f\n", sum, (float)sum / su);
}