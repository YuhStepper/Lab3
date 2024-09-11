#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	/*int num;

	puts("Введите число:");

	scanf("%d", &num);
	printf("Введено число: %d", num);*/
	
	int num1, num2;
	puts("Введите первое число: ");
	scanf("%d", &num1);
	puts("Введите второе число: ");
	scanf("%d", &num2);
	printf("Сумма введённых чисел: %d\n", num1 + num2);
	printf("Разность введённых чисел: %d\n", num1 - num2);
	printf("Произведение введённых чисел: %d\n", num1 * num2);
	printf("Частное введённых чисел: %d\n", num1 / num2);
}