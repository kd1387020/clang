#include <stdio.h>
main()
{
	int su1, su2, e;
	printf("演算子を入力：");
	scanf("%d", &e);
	printf("2つの整数を入力：");
	scanf("%d%d", &su1, &su2);
	if (e == 1) {
		printf("%d\n", su1 + su2);
	}
	else {
		if (e == 2) {
			printf("%d\n", su1 - su2);
		}
		else {
			if (e == 3) {
				printf("%d\n", su1 * su2);
			}
			else {
				if (e == 4) {
					printf("%d\n", su1 / su2);
				}
			}
		}
	}
}