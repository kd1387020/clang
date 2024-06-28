#include<stdio.h>

main() {

	int a = 50;
	int b = 10;
	int *p_a,*p_b,c;
	p_a = &a;
	p_b = &b;
	c = *p_a+*p_b;
	printf("c=%d\n",c);
}