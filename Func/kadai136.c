#include <stdio.h>
int hikaku(int , int );
main()
{
	int a, b;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	printf("max=%d\n", hikaku(a,b));/* ŠÖ”add‚ÌŒÄ‚Ño‚µ */

}
/* ŠÖ”add‚Ì‹Lq */
int hikaku(int a, int b) {
	int kotae;
	if (a >= b) {

		return(a);

	}
	else {

		return (b);

	}
}