#include <stdio.h>
main()
{
	char str[200];
	printf("文字列を入力:");
	while (gets(str) != NULL) {
		printf("%s\n", str);
		printf("文字列を入力:");
		
	}
}