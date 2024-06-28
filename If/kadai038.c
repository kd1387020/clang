#include <stdio.h>
main()
{
	char moji;

	printf("1•¶Žš“ü—Í?\n", moji);
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		moji += 0x20;
	}
	else if (moji >= 'a' && moji <= 'z') {
		moji -= 0x20;
	}
	else {
		printf("•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
	printf("%c\n", moji);
}