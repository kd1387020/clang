#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int k, p;
	printf("�����o���܂����H\n(1:�O�[2:�`���L3:�p�[)>");
	scanf(" % d", &p);
	srand(time(0));
	k = rand() % 3;
	if (p==1) {
		printf("�v���C���[�́A�O�[�ł��B\n");
	}
	else if (p==2) {
		printf("�v���C���[�́A�`���L�ł��B\n");
	}
	else {
		printf("�v���C���[�́A�p�[�ł��B\n");
	}
	if (k == 0) {
		printf("�R���s���[�^�[�́A�O�[�ł��B\n");
	}
	else if (k == 1) {
		printf("�R���s���[�^�[�́A�`���L�ł��B\n");
	}
	else {
		printf("�R���s���[�^�[�́A�p�[�ł��B\n");
	}

	if ((k == 0 && p == 1) || (k == 1 && p == 2) || (k == 2 && p == 3)) {
		printf("������\n");
	}
	if (k == 0 && p == 2) {
		printf("�R���s���[�^�[�̏����ł��B");
	}
	if (k == 0 && p == 3) {
		printf("�v���C���[�̏����ł��B");
	}
	if (k == 1 && p == 1) {
		printf("�v���C���[�̏����ł��B");
	}
	if (k == 1 && p == 3) {
		printf("�R���s���[�^�[�̏����ł��B");
	}
	if (k == 2 && p == 1) {
		printf("�R���s���[�^�[�̏����ł��B");
	}
	if (k == 2 && p == 2) {
		printf("�v���C���[�̏����ł��B");
	}
}