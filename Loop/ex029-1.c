#include <stdio.h>
main()
{
	int num;
	printf("��������");
	scanf("%d", &num);
	while (0 < num) {
		printf("*");
		num--;
	}
}