#include <stdio.h>
main()
{
	char su,roku;
	su = '5';
	roku = '6';
	printf("%c*%c=%d\n", su, roku, (su - 0x30)* (roku - 0x30));
}