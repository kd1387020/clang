#include <stdio.h>
main()
{
	int moji;
	printf("��������́F");
	scanf("%c", &moji);
	if ((moji >= 'A' && moji <= 'Z')|| (moji >= 'a' && moji <= 'z')) {
		printf("�A���t�@�x�b�g\n");
	}
	else {
		if (moji >= '0' && moji <= '9') {
			printf("�����ł�\n");
		}
		else {
			printf("���̑��̕����ł�");
		}
	}
}