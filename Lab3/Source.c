#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	/*int num;

	puts("������� �����:");

	scanf("%d", &num);
	printf("������� �����: %d", num);*/
	
	int num1, num2;
	puts("������� ������ �����: ");
	scanf("%d", &num1);
	puts("������� ������ �����: ");
	scanf("%d", &num2);
	printf("����� �������� �����: %d\n", num1 + num2);
	printf("�������� �������� �����: %d\n", num1 - num2);
	printf("������������ �������� �����: %d\n", num1 * num2);
	printf("������� �������� �����: %d\n", num1 / num2);
}