#include <stdio.h>
#define TBL_END 3
struct furuit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	int i,j;
	struct furuit syohin[] = {{"peach",300,5,3,0},
							{"grape",200,4,10,0},
							{"watermelon",1500,5,8,0} };
	struct fruit* p;
	p = syohin;
	for (j = 0; j < TBL_END; j++) {
		(p + j)->total = (j + p)->price * (p + j)->number;
		total += (p + j)->total;
		printf("¤•i–¼:\t\t%s\n", (p + j)->name);
		printf("‰¿Ši:\t\t%d\t", (p + j)->price);
		printf("‚¨‘E‚ß“x:\t");
		for (i = 0; i < (p + j)->point; i++) {
			printf("š");
		}
		printf("\n");
		printf("ŒÂ”:\t\t%dŒÂ\t", (p + j)->number);
		(p + j)->total = (p + j)->price * (p + j)->number;
		printf("‹àŠz:\t\t%d‰~\n", (p + j)->total);
	}
}