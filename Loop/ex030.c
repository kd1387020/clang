#include <stdio.h>
main()
{
	int i, num;
	i = 0;
	printf("数を入れて");
	scanf("%d", &num);
	while (i <= 10) {
		printf("%d+%d=%d\n",num,i,i+num);
		i++;
	}
}