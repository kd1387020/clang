#include <stdio.h>
main()
{
	int i;
	char data[] = "Apple";
	i = 0;
	while (data[i]!= '\0') {
		printf("一文字ずつ表示");
		printf("%c\n", data[i]);
		i++;
	}
	printf("文字列で表示");
	printf("%s\n",data[]);
}