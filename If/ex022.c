#include <stdio.h>
main()
{
	int b;
	printf("西暦を入力：\n");
	scanf("%d", &b);
	if (b <= 1988) {
		printf("昭和生まれです\n");
	}
	else {
		printf("平成生まれです\n");
	}
	

}