#include <stdio.h>
main()
{
	int su,i,j;
	printf("���́H");
		scanf("%d",&su);
		j = su+1;
		do {
			i = 0;
			do {
				printf("*");
				i++;
			} while (su < j-i);
			printf("\n");
				su--;
		} while ( su > 0);
}