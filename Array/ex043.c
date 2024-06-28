#include <stdio.h>
#include <string.h>
main()
{
	int cnt;
	char str[] = "orenge";
	cnt = 0;
	while (str[cnt] != '\0') {
		cnt++;
	}
	printf("•¶š—ñ:%s\n", str);
	printf("•¶š”‚Í%d\n", cnt);
	printf("•¶š”‚Í%d\n", strlen(str));
}