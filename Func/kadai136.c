#include <stdio.h>
int hikaku(int , int );
main()
{
	int a, b;
	printf("������2����:");
	scanf("%d%d", &a, &b);
	printf("max=%d\n", hikaku(a,b));/* �֐�add�̌Ăяo�� */

}
/* �֐�add�̋L�q */
int hikaku(int a, int b) {
	int kotae;
	if (a >= b) {

		return(a);

	}
	else {

		return (b);

	}
}