#include <stdio.h>
main()
{
	int moji;
	printf("文字を入力：\n");
	scanf("%c", &moji);
	if (moji>='A'&&moji<='Z') {
				printf("大文字です\n");
	}
	else {
		printf("その他の文字です\n");
	}
	

}