#include <stdio.h>
main()
{
	int i = 0,k[21];
	char s[21];
	printf("暗号化文字列を入力してください");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		printf("s[%d]の複合化キー>", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
		i++;
	}
	printf("複合済文字列は、%s\n", s);
}
