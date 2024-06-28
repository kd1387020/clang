#include <stdio.h>
int add(int a, int b); /* プロトタイプ宣言 */
int hiku(int a, int b); /* プロトタイプ宣言 */
int kake(int a, int b); /* プロトタイプ宣言 */
int wari(int a, int b); /* プロトタイプ宣言 */
main()
{
	int a, b, kotae;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);
	printf("合計は%dです\n", add(a, b));/* 関数addの呼び出し */
	printf("減算結果は%dです\n", hiku(a, b));/* 関数addの呼び出し */
	printf("乗算結果は%dです\n", kake(a, b));/* 関数addの呼び出し */
	printf("除算結果は%dです\n", wari(a, b));/* 関数addの呼び出し */
}
/* 関数addの記述 */
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