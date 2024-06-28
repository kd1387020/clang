#include <stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile student;
	printf("–¼‘O‚ğ“ü—Í:");
	scanf("%s", student.name);
	printf("\n¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &student.birth[0],&student.birth[1],&student.birth[2]);
	printf("\nŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s", student.blood);
	printf("\n%s--%d”N%dŒ%d“ú¶ ŒŒ‰tŒ^-%sŒ^", student.name, student.birth[0], student.birth[1], student.birth[2], student.blood);
}