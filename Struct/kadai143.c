#include <stdio.h>
struct furuit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	int i;
	struct furuit syohin = { "peach",300,5,3,0 };
	printf("è§ïiñº:\t\t%s\n", syohin.name);
	printf("âøäi:\t\t%d\n", syohin.price);
	printf("Ç®ëEÇﬂìx:\t");
	for (i = 0; i < syohin.point; i++) {
		printf("Åö");
	}
	printf("\n");
	printf("å¬êî:\t\t%då¬\n", syohin.number);
	syohin.total = syohin.price * syohin.number;
	printf("ã‡äz:\t\t%då¬\n", syohin.total);
}