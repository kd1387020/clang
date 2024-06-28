#include <stdio.h>
main()
{
	int su, g;
	g = 0;
	while (1)
	{
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &su);
		if (su== -999)
		{
			break;
		}
		g += su;
	}
		printf("‡Œv%d\n", g);

}