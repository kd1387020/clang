#include <stdio.h>
main()
{
	int i, num;
	i = 0;
	printf("数を入れて");
	scanf("%d", &num);
	while (i < num) {
		printf("*");
		i++;
	}
}