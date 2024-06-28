#include<stdio.h>
#define Sol_Num 3

typedef struct {
	char Wname[20];
	int bullet;
	float atk;
} Weapon;

typedef struct {
	char name[20];
	int hp;
	Weapon wpn;
}Spldier;

void SetInfo(Spldier* s, char* filename);
void Display(Spldier* s);

main() {
	Spldier sols[Sol_Num];

	SetInfo(sols, "file04.txt");
	Display(sols);
}
void SetInfo(Spldier* s, char* filename) {
	FILE* fp;
	int i;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < Sol_Num; i++) {
			fscanf(fp, "%s%d%s%d%f", (s+i)->name, &(s + i)->hp, (s + i)->wpn.Wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
		fclose(fp);
	}
}
void Display(Spldier* s) {
	int i;
	for (i = 0; i < Sol_Num; i++) {
		printf("%s\t�̗�:%d\n", (s+i)->name, (s + i)->hp);
		printf("����:%s\t�e��:%d\t�U����:%.2f\n", (s + i)->wpn.Wname, (s + i)->wpn.bullet, (s + i)->wpn.atk);
	}
}