#include <stdio.h>
main()
{
	int su1, su2, e;
	printf("���Z�q����́F");
	scanf("%d", &e);
	printf("2�̐�������́F");
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