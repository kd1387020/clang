#include <stdio.h>
char moji(char , char );
main()
{
	char a;
	printf("���������:");
	scanf("%c", &a);
	printf("max=%d\n", moji(a));/* �֐�add�̌Ăяo�� */

}
/* �֐�add�̋L�q */
int moji(char a) {
	if (a >= 0x61&&a<=0x7a) {

		return(1);

	}
	else {


		return (0);

	}
}