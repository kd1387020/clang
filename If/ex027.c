#include <stdio.h>
main()
{
	char moji;
	printf("��������́F");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		printf("%c\n", moji+ 0x20);
	}
	else {
		if (moji >= 'a' && moji <= 'z')
		{
			printf("%c\n", moji - 0x20);
		}
		else {
			printf("�G���[\n");
		}
	}
}