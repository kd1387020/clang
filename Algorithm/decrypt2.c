#include <stdio.h>
main()
{
	int i = 0,k[21];
	char s[21];
	printf("�Í������������͂��Ă�������");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		printf("s[%d]�̕������L�[>", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
		i++;
	}
	printf("�����ϕ�����́A%s\n", s);
}
