#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int k;

	srand(time(0));
	k = rand() % 5 + 1;
	printf("今日のあなたの運勢は、");
	for (; 0 < k; k--) {
		printf("☆ ");
	}
			printf("です。\n");
		
}