#include<stdio.h>

main() {

	int a = 100;
	int b = 200;
	int *p_a,*p_b,w;
	printf("Às‘O:a=%d\tb=%d\n", a, b);
	p_a = &a;
	p_b = &b;
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("ÀsŒã:a=%d\tb=%d\n",a,b);
}