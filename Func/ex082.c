#include <stdio.h>
#include <string.h>
void syojyun(int tbl[], int cnt);
void kojyun(int tbl[], int cnt);
main() {
	int data[8] = { 6,10,8,2,9,5,1,7 }, i;
	char s[128];
	printf("ƒ\[ƒg•ûŒü‚ğ“ü—Í:");
	scanf("%s", s);
	if (strcmp(s, "¸‡") == 0) { syojyun(data, 8); }
	if (strcmp(s, "~‡") == 0) { kojyun(data, 8); }
	for (i = 0; i < 8; i++) {
		printf("%d", data[i]);
	}
}
void syojyun(int tbl[], int cnt) {
	int i, j, w;
	for (i = 0; i < cnt; i++) {
		for (j = i + 1; j < cnt; j++) {
			if (tbl[i] > tbl[j]) {
				w = tbl[i];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
}
void kojyun(int tbl[], int cnt) {
	int i, j, w;
	for (i = 0; i < cnt; i++) {
		for (j = i + 1; j < cnt; j++) {
			if (tbl[i] < tbl[j]) {
				w = tbl[i];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
}