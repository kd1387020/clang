#include <stdio.h>
main()
{
	int i, j;
	j = 0;
	printf("数を入れて");
	scanf("%d", &j);
	for (i = 1; i <= 5; i++) {
		printf("%d\n", i*j);

	}
}