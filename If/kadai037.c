#include <stdio.h>
main()
{
	int s;
	printf("�O����P�O�O�܂ł̐�������́F");
	scanf("%d", &s);
	if (s >= 90) {
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�\n");
	}
	else {
		if (s >= 80) {									//if (s >= 80 && s<=90) ;�@�@90�ȏォ�̃`�F�b�N�͏����Ȃ��Ă�����
			printf("���̐��l�̔��茋�ʂ́u4�v�ł�\n");
		}
		else {
			if (s >= 50) {
				printf("���̐��l�̔��茋�ʂ́u3�v�ł�\n");
			}
			else {
				if (s >= 30) {
					printf("���̐��l�̔��茋�ʂ́u2�v�ł�\n");
				}
				else {
					printf("���̐��l�̔��茋�ʂ́u1�v�ł�\n");
				}
			}
		}
	}
}