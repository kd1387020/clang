#include <stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int *p_tbl,i;

	p_tbl = tbl[0];
	printf("2�����z��tbl�̓��e\n");
	for (i = 0; i < 9; i++) {
		printf("%d\n", *p_tbl++);
	}
}