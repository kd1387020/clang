#include <stdio.h>
#include <string.h>
main()
{
	int cnt;
	char str[] = "orenge";
	cnt = 0;
	while (str[cnt] != '\0') {
		cnt++;
	}
	printf("文字列:%s\n", str);
	printf("文字数は%d\n", cnt);
	printf("文字数は%d\n", strlen(str));
}