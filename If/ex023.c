#include <stdio.h>
main()
{
	int s, m, h,a;
	printf("秒数を入力：\n");
	scanf("%d", &s);
	if (s <= 5000) {
		if (s >= 3600) {
			h = s / 3600;
			s = s % 3600;
		}
			if(s>=60){
				m = s / 60;
				s = s % 60;
			}
			if(s<=60){
				printf("%d時%d分%d秒です", h, m, s);
			}



	}
	else {
		printf("エラー");
	}
	

}