#include <stdio.h>
main()
{
	int s=0,d=0;
	char a=0;
	printf("�����R�[�h�i�|1�œ���)?");
	scanf("%d\n", &s);
	for (; d < s; d++) {
		a++;
	}
	while (s != -1) {
		printf("�����R�[�h�i�|1�œ���)?");
		scanf("%d", &s);
		for (; d < s; d++) {
			a++;
		}
		printf("%c\n", a );
	}
}