#include <stdio.h>
main()
{
	int i;
	float box[3] = { 0,0,0 }, b;
	for (i = 0; i < 3; i++) {
		printf("���������:");
		scanf("%f", &box[i]);
		b += box[i];
	}
	printf("���v��%.2f�ł�\n", b);
	printf("���ς�%.2f�ł�\n", b / 3);
}