#include <stdio.h>
main()
{
	int i = 0,k[21];
	char s[21];
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		printf("s[%d]‚Ì•¡‡‰»ƒL[>", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
		i++;
	}
	printf("•¡‡Ï•¶š—ñ‚ÍA%s\n", s);
}
