#include <stdio.h>
main()
{
	char moji;

	printf("1��������?\n", moji);
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		moji += 0x20;
	}
	else if (moji >= 'a' && moji <= 'z') {
		moji -= 0x20;
	}
	else {
		printf("��������͂��Ă�������\n");
	}
	printf("%c\n", moji);
}