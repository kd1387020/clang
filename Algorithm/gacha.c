#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int k,i;

	srand(time(0));
	for (i = 0; i < 10; i++) {
		k = rand() % 100;
		if (k <= 10) {
			printf("スーパーレア★★★★★\n");
		}
		else {
			printf("レア★★★★\n");
		}
	}
}