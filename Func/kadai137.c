#include <stdio.h>
char moji(char , char );
main()
{
	char a;
	printf("文字を入力:");
	scanf("%c", &a);
	printf("max=%d\n", moji(a));/* 関数addの呼び出し */

}
/* 関数addの記述 */
int moji(char a) {
	if (a >= 0x61&&a<=0x7a) {

		return(1);

	}
	else {


		return (0);

	}
}