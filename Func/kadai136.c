#include <stdio.h>
int hikaku(int , int );
main()
{
	int a, b;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);
	printf("max=%d\n", hikaku(a,b));/* 関数addの呼び出し */

}
/* 関数addの記述 */
int hikaku(int a, int b) {
	int kotae;
	if (a >= b) {

		return(a);

	}
	else {

		return (b);

	}
}