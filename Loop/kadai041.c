#include <stdio.h>
main()
{
	int su, goukei, i;
	i = 0;
	su = 0;
	goukei = 0;
	while (su != -999); {
		printf("����(-�X�X�X�ŏI��)�H");
		scanf("%d", &su);
		goukei += su;
		i++;
	}
	printf("���v=%d\n����=%d\n", goukei, goukei / i);
}