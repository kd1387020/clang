#include <stdio.h>
main()
{
	int s, m, h,a;
	printf("�b������́F\n");
	scanf("%d", &a);
	if (a <= 5000) {
		if (a >= 0) {

			h = a / 3600;
			a = a % 3600;


			m = a / 60;
			s = a % 60;
			printf("%d��%d��%d�b�ł�\n", h, m, s);
		}
		else {
			printf("�}�C�i�X�̓G���[�ł�");
		}
	}
	else {
		printf("�G���[");
	}
}