#include <stdio.h>
main()
{
	int su;
	printf("演算子を入れて:");
	scanf("%d", &su);
	if (10 <= su && su <= 49) {
		switch (su/10) {
		case 4:
			printf("40点台です\n");
			break;
		case 3:
			printf("30点台です\n");
			break;
		case 2:
			printf("20点台です\n");
			break;
		case 1:
			printf("10点台です\n");
			break;
		}
	}
	else{
		printf("エラー\n");
	}
}