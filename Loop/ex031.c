#include <stdio.h>
main()
{
	int i, j;
	j = 0;

			for (i = 1; i < 11; i++) {
				j +=i;
				printf("1から%dまでの和=%d\n",i, j);
			}
		
}