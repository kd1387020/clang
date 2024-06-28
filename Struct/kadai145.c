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
	for (j = 0; j < TBL_END; j++) {
		printf("¤•i–¼:\t\t%s\n", syohin[j].name);
		printf("‰¿Ši:\t\t%d\t", syohin[j].price);
		printf("‚¨‘E‚ß“x:\t");
		for (i = 0; i < syohin[j].point; i++) {
			printf("š");
		}
		printf("\n");
		printf("ŒÂ”:\t\t%dŒÂ\t", syohin[j].number);
		syohin[j].total = syohin[j].price * syohin[j].number;
		printf("‹àŠz:\t\t%d‰~\n", syohin[j].total);
	}
}