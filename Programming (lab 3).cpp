// Programming (lab 3).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <locale.h>
#include <stdio.h>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int var = 0, var2 = 0;

	printf("Введите число в 16 системе счисления: ");
	scanf_s("%X", &var);
	printf("Введенное число в 8 системе счисления: %o\n\n", var);
	printf("Введенное число в 16 системе счисления: %X\n", var);
	printf("Введенное число в 16 системе счисления со сдвигом влево на 2 бита: %X\n\n", var << 2);
	printf("Введенное число в 16 системе счисления: %X\n", var);
	printf("Введенное число в 16 системе счисления с побитовым отрицанием: %X\n\n", ~var);

	printf("Введите число в 16 системе счисления: ");
	scanf_s("%X", &var2);
	printf("Введенное число в 16 системе счисления с побитовым ИЛИ: %X\n", var | var2);


    return 0;
}

