#include <stdio.h>
main()
{
	int i = 0;
	char s[21], k[21];
	printf("暗号化文字列を入力してください");
	scanf("%s", &s[0]);
	printf("複合化キー>");
	scanf("%s", &k[0]);
	while (s[i] != '\0') {
		s[i] = s[i] - (k[i]-'0');
		i++;
	}
	printf("複合済文字列は、%s\n", s);
}
