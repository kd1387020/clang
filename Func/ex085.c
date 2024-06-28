#include <stdio.h>
void irekae(char* p1,char*p2); 
main()
{
	char str1[128], str2[128];
	printf("•¶Žš—ñ1?:");
	scanf("%s", str1);
	printf("•¶Žš—ñ2?:");
	scanf("%s", str2);
	irekae(str1, str2);
	printf("%s\n", str1);
}

void irekae(char* p1, char* p2) {
	for (; *p1 != '\0'; *p1++);
	while(*p2!='\0'){
		*p1 = *p2;
		*p1++;
		*p2++;
		}
	*p1++;
	*p1 = '\0';
}