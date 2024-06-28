#include <stdio.h>
main()
{
	int su,i,j;
	printf("”‚ÍH");
		scanf("%d",&su);
		j = su+1;
		su = 1;
		do {
			i = 0;
			do {
				printf("*");
				i++;
			} while (i < su);
			printf("\n");
				su++;
		} while ( j > su);
}