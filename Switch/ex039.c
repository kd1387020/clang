#include <stdio.h>
main()
{
	int a, b, c;
	char flg;
	printf("���������:");
	scanf("%c", &flg);
	printf("���������:");
	scanf("%d%d%d", &a,&b,&c);
	if (flg == 'd' || flg == 's' || flg == 'g' || flg == 'h') {
		switch (flg) {
		case 'd':
			if (a - b - c >= 0) {
				printf("�ő�l��%d�ł�\n", a);
			}
			else {
				if (b - a - c >= 0) {
					printf("�ő�l��%d�ł�\n", b);
				}
				else {
					printf("�ő�l��%d�ł�\n", c);
				}
			}
			break;
		case 's':
			if (a < b && a < c) {
				printf("�ŏ��l��%d�ł�\n", a);
			}
			else {
				if (b < a && b < c) {
					printf("�ŏ��l��%d�ł�\n", b);
				}
				else {
					if (c < a && c < b) {
						printf("�ŏ��l��%d�ł�\n", c);
					}
				}
				break;
		case 'g':
			printf("���v��%d�ł�\n", a + b + c);
			break;
		case 'h':
			printf("���ς�%d�ł�\n", (a + b + c) / 3);

			break;
			}
		}
	}
	else{
		printf("�G���[\n");
	}
}