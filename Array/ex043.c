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
	printf("������:%s\n", str);
	printf("��������%d\n", cnt);
	printf("��������%d\n", strlen(str));
}