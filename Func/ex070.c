#include <stdio.h>
int add(int a, int b); /* �v���g�^�C�v�錾 */
int hiku(int a, int b); /* �v���g�^�C�v�錾 */
int kake(int a, int b); /* �v���g�^�C�v�錾 */
int wari(int a, int b); /* �v���g�^�C�v�錾 */
main()
{
	int a, b, kotae;
	printf("������2����:");
	scanf("%d%d", &a, &b);
	printf("���v��%d�ł�\n", add(a, b));/* �֐�add�̌Ăяo�� */
	printf("���Z���ʂ�%d�ł�\n", hiku(a, b));/* �֐�add�̌Ăяo�� */
	printf("��Z���ʂ�%d�ł�\n", kake(a, b));/* �֐�add�̌Ăяo�� */
	printf("���Z���ʂ�%d�ł�\n", wari(a, b));/* �֐�add�̌Ăяo�� */
}
/* �֐�add�̋L�q */
int add(int a, int b) {
	return ( a + b);
}
int hiku(int a, int b) {
	return(a - b);
}
int kake(int a, int b) {
	return(a * b);
}
int wari(int a, int b) {
	return(a / b);
}