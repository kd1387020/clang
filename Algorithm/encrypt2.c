#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i = 0,k[21];
	char s[21];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s[0]);
	srand(time(0));
	printf("ˆÃ†‰»ƒL[‚Í");
	while (s[i] != '\0') {
		k[i] = rand()%6;
		printf("%d", k[i]);
		s[i] = s[i] + k[i];
		i++;
	}
	printf("\nˆÃ†‰»•¶š—ñ‚ÍA%s\n", s);
}
