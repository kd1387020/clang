#include <stdio.h>
main()
{
	int m;
	printf("������́F");
	scanf("%d", &m);
	if (m == 1 ||m== 3 ||m== 5 ||m== 7 ||m== 8 || m==10 || m==12) {
		printf("�ŏI����31���ł�\n");
	}
	else {
		if (m == 4 || m==6 ||m== 9 ||m== 11) {
			printf("�ŏI����30���ł�\n");
		}
		else {
			printf("28���ł�\n");
		}
	}
}