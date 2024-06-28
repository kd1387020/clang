#include<stdio.h>
enum BitState
{
	Base = 0,			//00000000 í èÌèÛë‘
	Poison=1<<0,			//00000001 ì≈èÛë‘
	Sleep=1,			//00000010 ñ∞ÇËèÛë‘
	Paralysis=1<<2,		//00000100 É}ÉqèÛë‘
	Burn=1<<3,			//00001000 Ç‚ÇØÇ«èÛë‘
	AtkUp=1<<4,			//00010000 çUåÇóÕÉAÉbÉvèÛë‘
	AtkDown=1<<5		//00100000 çUåÇóÕÉ_ÉEÉìèÛë‘
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT myState = Base;
	ChangeFlag(&myState);
	DisplayStatus(myState);
	ClearFlag(&myState);
	DisplayStatus(myState);
}
void DisplayStatus(UINT s) {
	printf("****åªç›ÇÃèÛë‘****\n");
	if (s & Poison) {
		printf("ì≈\n");
	}
	if (s & Sleep) {
		printf("êáñ∞\n");
	}
	if (s & Paralysis) {
		printf("ñÉ·É\n");
	}
	if (s & Burn) {
		printf("âŒèù\n");
	}
	if (s & AtkUp) {
		printf("çUåÇóÕÉAÉbÉv\n");
	}
	if (s & AtkUp) {
		printf("çUåÇóÕÉ_ÉEÉì\n");
	}
	if (s == AtkUp) {
		printf("í èÌèÛë‘\n");
	}
	printf("**********************\n");
}
void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		printf("Ç«ÇÃèÛë‘Ç…ÇµÇ‹Ç∑Ç©?\n");
		printf("1:ì≈ 2:êáñ∞ 3:ñÉ·É 4:âŒèù 5:çUåÇÅ™ 6:çUåÇÅ´ 0:èIóπ>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		}
	}
}
void ClearFlag(UINT* s) {
	int a;
	while (1) {
		printf("Ç«ÇÃèÛë‘ÇâèúÇµÇ‹Ç∑Ç©?\n");
		printf("1:ì≈ 2:êáñ∞ 3:ñÉ·É 4:âŒèù 5:çUåÇÅ™ 6:çUåÇÅ´ 0:èIóπ>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		}
	}
}