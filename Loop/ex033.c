#include <stdio.h>
main()
{
	int i,j, su;
	i = 0;
	su = 0;
	for (; su != -999;) {
		j += su;
		i++;
		printf("数は？");
		scanf("%d", &su);
	}
	printf("合計=%d    平均=%.2f", j,(float)j/i);
}