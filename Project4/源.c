# define _CRT_SECURE_NO_WARNINGS 1#
#include <stdio.h>
int main(void)
{
	int a;

	scanf("%d", &a);
	if (a % 5 == 0)
		printf("Yes");
	else printf("No");

	return 0;
}
