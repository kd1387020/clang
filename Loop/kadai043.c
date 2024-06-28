#include <stdio.h>
main()
{
	int s=0,d=0;
	char a=0;
	printf("文字コード（－1で入力)?");
	scanf("%d\n", &s);
	for (; d < s; d++) {
		a++;
	}
	while (s != -1) {
		printf("文字コード（－1で入力)?");
		scanf("%d", &s);
		for (; d < s; d++) {
			a++;
		}
		printf("%c\n", a );
	}
}