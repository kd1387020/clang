#include <stdio.h>
main()
{
	char ch,data[15] = "Language";
	char* p_data;
	int i;
	printf("data[]=%s\n", data);
	printf("���������́H\n");
	scanf("%c", &ch);
	printf("�������ʂ́A");
	i = 0;
	p_data = data;
	while(*(p_data+i)){
		if (ch == *(p_data+i)) {
			printf("%d ", i + 1);
		}
		i++;
	}
	printf("�����ڂł�\n");
}