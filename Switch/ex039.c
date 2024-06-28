#include <stdio.h>
main()
{
	int a, b, c;
	char flg;
	printf("処理を入力:");
	scanf("%c", &flg);
	printf("整数を入力:");
	scanf("%d%d%d", &a,&b,&c);
	if (flg == 'd' || flg == 's' || flg == 'g' || flg == 'h') {
		switch (flg) {
		case 'd':
			if (a - b - c >= 0) {
				printf("最大値は%dです\n", a);
			}
			else {
				if (b - a - c >= 0) {
					printf("最大値は%dです\n", b);
				}
				else {
					printf("最大値は%dです\n", c);
				}
			}
			break;
		case 's':
			if (a < b && a < c) {
				printf("最小値は%dです\n", a);
			}
			else {
				if (b < a && b < c) {
					printf("最小値は%dです\n", b);
				}
				else {
					if (c < a && c < b) {
						printf("最小値は%dです\n", c);
					}
				}
				break;
		case 'g':
			printf("合計は%dです\n", a + b + c);
			break;
		case 'h':
			printf("平均は%dです\n", (a + b + c) / 3);

			break;
			}
		}
	}
	else{
		printf("エラー\n");
	}
}