// Programming (9 lab).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h> 
#include <string.h>

void arrOfNumber(int n, int ptrArr[], int size)
{
	int delitel = 1;
	int k = size;

	while (k != 1)
	{
		delitel *= 10;
		k--;
	}

	for (int i = 0, temp = n; i < size && temp != 0; i++)
	{
		ptrArr[i] = temp / delitel;
		temp %= delitel;
		delitel /= 10;
	}
}

int main() 
{
	// Вариант 18
	// Задание 3

	printf("Input a number: ");
	int number;
	scanf_s("%d", &number);

	char str[20];
	sprintf_s(str, "%d", number);
	int r = strlen(str);

	for (int i = 0; i < r; i++)
	{
		switch (str[i])
		{
		case '0':
			printf("zero ");
			break;
		case '1':
			printf("one ");
			break;
		case '2':
			printf("two ");
			break;
		case '3':
			printf("three ");
			break;
		case '4':
			printf("four ");
			break;
		case '5':
			printf("five ");
			break;
		case '6':
			printf("six ");
			break;
		case '7':
			printf("seven ");
			break;
		case '8':
			printf("eight ");
			break;
		case '9':
			printf("nine ");
			break;
		}
	}
	printf("\n");

	// Задание 5

	int firstSum, month;
	float percentRate;

	printf("Input percent rate: ");
	scanf_s("%f", &percentRate);
	percentRate /= 100;

	printf("Input first sum: ");
	scanf_s("%d", &firstSum);

	printf("Input quantity of months: ");
	scanf_s("%d", &month);

	for (int i = 0; i < month; i++)
	{
		firstSum = firstSum - (firstSum * percentRate);
		printf("After %d payout bank account has %d moneys.\n", i + 1, firstSum);
	}

	return 0;
}

