#include <stdio.h>
main(int argc, char* argv[])
{
	int a, b,c;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c = a + b;
	printf("%d\n", c);
}