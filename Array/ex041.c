#include <stdio.h>
main()
{
	int i;
	float box[3] = { 0,0,0 }, b;
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		b += box[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n", b);
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", b / 3);
}