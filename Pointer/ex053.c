#include<stdio.h>

main() {

	int a = 100;
	int b = 200;
	int *p_a,*p_b,*w;
	p_a = &a;
	p_b = &b;
	printf("���s�O:a=%d\tb=%d\n", *p_a, *p_b);
	w = p_a;
	p_a = p_b;
	p_b = w;
	printf("���s��:a=%d\tb=%d\n",*p_a,*p_b);
}