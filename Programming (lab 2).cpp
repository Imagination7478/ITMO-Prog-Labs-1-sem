// Programming (lab 2).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	// Вариант 3
	setlocale(LC_ALL, "Rus");

	float z1, z2;
	double alpha = 0;

	printf("z1 = (sin(2a) + sin(5a) - sin(3a)) / (cos(a) + 1 - 2sin^2(2a))\nz2 = 2*sin(a)\nВведите значение a: ");
	scanf_s("%lf", &alpha);

	printf("z1 = %f\n", (sin(2 * alpha) + sin(5 * alpha) - sin(3 * alpha)) / (cos(alpha) + 1 - 2 * pow(sin(2 * alpha), 2)));
	printf("z2 = %f\n", 2 * sin(alpha));

    return 0;
}

