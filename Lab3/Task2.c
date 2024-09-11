#include <stdio.h>
#include <locale.h>
#define      D       2.54

void task2()
{
	int dym;

	float result;

	puts("ֲגוהטעו ךמכ-גמ ה‏ילמג: ");
	scanf("%d", &dym);
	result = D * dym;

	printf(" % d ה‏ילמג – ‎עמ % .1f סל ", dym, result);
}