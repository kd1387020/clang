#include <stdio.h>
main()
{
	int su1, su2, su3, goukei;
	float heikin;
	printf("������3���́F");
	scanf("%d%d%d", &su1,&su2,&su3);
	goukei = su1 + su2 + su3;
	heikin = goukei / 3.0;
	printf("���v��%t���ρ�%.2f\n", goukei, heikin);
}