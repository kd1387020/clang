#include <stdio.h>
main()
{
	int i, s;
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int mid, low, high;
	printf("�T���l�����");
	scanf("%d", &s);
	low = 0;
	high = 10;
	for (i = 0; i < 11; i++) {
		if (low <= high) {
			mid = (low + high) / 2;
			//printf("low:%d mid:%d high:%d\n", low, mid, high);
			if (s == d[mid]) {
				break;
			}
			if (s > d[mid]) {
				low = mid + 1;
			}
			if (s < d[mid]) {
				high = mid - 1;
			}
		}
	}
	if (low>high) {
		printf("������Ȃ�����");
	}
	else {
		printf("%d�s�ڂŔ���\n", mid+1);
	}
}