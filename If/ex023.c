#include <stdio.h>
main()
{
	int s, m, h,a;
	printf("•b”‚ğ“ü—ÍF\n");
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
				printf("%d%d•ª%d•b‚Å‚·", h, m, s);
			}



	}
	else {
		printf("ƒGƒ‰[");
	}
	

}