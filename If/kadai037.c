#include <stdio.h>
main()
{
	int s;
	printf("０から１００までの整数を入力：");
	scanf("%d", &s);
	if (s >= 90) {
		printf("その数値の判定結果は「5」です\n");
	}
	else {
		if (s >= 80) {									//if (s >= 80 && s<=90) ;　　90以上かのチェックは書かなくてもいい
			printf("その数値の判定結果は「4」です\n");
		}
		else {
			if (s >= 50) {
				printf("その数値の判定結果は「3」です\n");
			}
			else {
				if (s >= 30) {
					printf("その数値の判定結果は「2」です\n");
				}
				else {
					printf("その数値の判定結果は「1」です\n");
				}
			}
		}
	}
}