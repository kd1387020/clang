#include <stdio.h>
main()
{
	int i,j;
	float a[3][2],gokei; 
	for ( i = 0; i <=2; i++) {
		for (gokei = 0, j = 0; j < 2; j++) {
			printf("a[%d][%d] = ", i,j);
			scanf("%f", &a[i][j]);
			gokei += a[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n", i, gokei/2);
	}
}