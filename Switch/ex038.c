#include <stdio.h>
main()
{
	int su;
	printf("���Z�q������:");
	scanf("%d", &su);
	if (10 <= su && su <= 49) {
		switch (su/10) {
		case 4:
			printf("40�_��ł�\n");
			break;
		case 3:
			printf("30�_��ł�\n");
			break;
		case 2:
			printf("20�_��ł�\n");
			break;
		case 1:
			printf("10�_��ł�\n");
			break;
		}
	}
	else{
		printf("�G���[\n");
	}
}