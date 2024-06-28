#include <stdio.h>
main()
{
	int s, m, h,a;
	printf("秒数を入力：\n");
	scanf("%d", &a);
	if (a <= 5000) {
		if (a >= 0) {

			h = a / 3600;
			a = a % 3600;


			m = a / 60;
			s = a % 60;
			printf("%d時%d分%d秒です\n", h, m, s);
		}
		else {
			printf("マイナスはエラーです");
		}
	}
	else {
		printf("エラー");
	}
}