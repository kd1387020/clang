#include <stdio.h>
main()
{
	int a,sum=0,su=0;

	printf("����:");
	while (scanf("%d",&a) != EOF) {
		sum += a;
		su++;
		printf("����:");
	}
	printf("���v=%d ����=%.2f\n", sum, (float)sum / su);
}