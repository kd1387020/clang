#include <stdio.h>
main()
{
	int i;
	char moji1[40], moji2[40], m[40];
	printf("•¶Žš—ñ1‚ð“ü—Í:");
	scanf("%s", &moji1[0]);
	printf("•¶Žš—ñ2‚ð“ü—Í:");
	scanf("%s", &moji2[0]);
	i = 0;
	while (moji1[i] != '\0') {
		m[i] = moji1[i];
		i++;
	}
	m[i] = '\0';
	i = 0;
	while (moji2[i] != '\0') {
		moji1[i] = moji2[i];
		i++;
	}
	moji1[i] = '\0';
	i = 0;
	while (m[i] != '\0') {
		moji2[i] = m[i];
		i++;
	}
	moji2[i] = '\0';
	printf("moji1=%s moji2=%s\n", &moji1, &moji2);
}