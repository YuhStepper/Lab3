#include <stdio.h>
#include <locale.h>
#define      D       2.54

void task2()
{
	int dym;

	float result;

	puts("������� ���-�� ������: ");
	scanf("%d", &dym);
	result = D * dym;

	printf(" % d ������ � ��� % .1f �� ", dym, result);
}