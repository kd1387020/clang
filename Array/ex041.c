#include <stdio.h>
main()
{
	int i;
	float box[3] = { 0,0,0 }, b;
	for (i = 0; i < 3; i++) {
		printf("実数を入力:");
		scanf("%f", &box[i]);
		b += box[i];
	}
	printf("合計は%.2fです\n", b);
	printf("平均は%.2fです\n", b / 3);
}