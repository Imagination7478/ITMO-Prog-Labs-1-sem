// Programming (lab 1).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int var;
	char str[20];

	printf("Введите целое число: ");
	scanf_s("%d", &var);

	printf("Введите строку: ");
	scanf_s("%19s", str);

    return 0;
}

