#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i = 0,k[21];
	char s[21];
	printf("文字列を入力してください");
	scanf("%s", &s[0]);
	srand(time(0));
	printf("暗号化キーは");
	while (s[i] != '\0') {
		k[i] = rand()%6;
		printf("%d", k[i]);
		s[i] = s[i] + k[i];
		i++;
	}
	printf("\n暗号化文字列は、%s\n", s);
}
