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
		printf("���i��:\t\t%s\n", syohin[j].name);
		printf("���i:\t\t%d\t", syohin[j].price);
		printf("���E�ߓx:\t");
		for (i = 0; i < syohin[j].point; i++) {
			printf("��");
		}
		printf("\n");
		printf("��:\t\t%d��\t", syohin[j].number);
		syohin[j].total = syohin[j].price * syohin[j].number;
		printf("���z:\t\t%d�~\n", syohin[j].total);
	}
}