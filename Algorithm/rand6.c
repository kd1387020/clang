#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int k, p;
	printf("何を出しますか？\n(1:グー2:チョキ3:パー)>");
	scanf(" % d", &p);
	srand(time(0));
	k = rand() % 3;
	if (p==1) {
		printf("プレイヤーは、グーです。\n");
	}
	else if (p==2) {
		printf("プレイヤーは、チョキです。\n");
	}
	else {
		printf("プレイヤーは、パーです。\n");
	}
	if (k == 0) {
		printf("コンピューターは、グーです。\n");
	}
	else if (k == 1) {
		printf("コンピューターは、チョキです。\n");
	}
	else {
		printf("コンピューターは、パーです。\n");
	}

	if ((k == 0 && p == 1) || (k == 1 && p == 2) || (k == 2 && p == 3)) {
		printf("あいこ\n");
	}
	if (k == 0 && p == 2) {
		printf("コンピューターの勝ちです。");
	}
	if (k == 0 && p == 3) {
		printf("プレイヤーの勝ちです。");
	}
	if (k == 1 && p == 1) {
		printf("プレイヤーの勝ちです。");
	}
	if (k == 1 && p == 3) {
		printf("コンピューターの勝ちです。");
	}
	if (k == 2 && p == 1) {
		printf("コンピューターの勝ちです。");
	}
	if (k == 2 && p == 2) {
		printf("プレイヤーの勝ちです。");
	}
}