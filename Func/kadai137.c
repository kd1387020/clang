#include <stdio.h>
char moji(char , char );
main()
{
	char a;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &a);
	printf("max=%d\n", moji(a));/* ŠÖ”add‚ÌŒÄ‚Ño‚µ */

}
/* ŠÖ”add‚Ì‹Lq */
int moji(char a) {
	if (a >= 0x61&&a<=0x7a) {

		return(1);

	}
	else {


		return (0);

	}
}