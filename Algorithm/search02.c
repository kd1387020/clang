#include <stdio.h>
main()
{
	int i, s;
	int d[10] = { 10,5,30,77,16,3,47,29,37,33, };

	printf("探索値を入力");
	scanf("%d", &s);
	for (d[10]=s,i = 0; s != d[i]; i++) {
		if (s==d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("見つからなかった");
	}
	else {
		printf("%d行目で発見\n", i+1);
	}
}