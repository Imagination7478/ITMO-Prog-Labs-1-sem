#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <conio.h>
#define _DVATSATb 20
#define CLEARBUFF getchar()

int main(void)
{
	// Вариант 18
	// Задание 1
	char string1[_DVATSATb] = "\0";
	char string2[_DVATSATb] = "\0";

	printf("Input first string: ");
	gets_s(string1);

	printf("Input second string: ");
	gets_s(string2);

	char resultString[_DVATSATb * 5] = "\0";

	strcat_s(resultString, string1);
	strcat_s(resultString, string2);

	printf("Result string is %s\n\n", resultString);

	// Задание 4
	int n;
	printf("Input n: ");
	scanf_s("%d", &n);

	int i = 0;
	while (n > i)
	{
		if (string1[i] < string2[i])
		{
			printf("%d element firstString > %d element secondString\n", i + 1, i + 1);
			i++;
		}
		else if (string1[i] == string2[i])
		{
			printf("%d element firstString = %d element secondString\n", i + 1, i + 1);
			i++;
		}
		else
		{
			printf("%d element firstString < %d element secondString\n", i + 1, i + 1);
			i++;
		}
	}
	// Задание 5
	for (int i = 0; i < _DVATSATb; i++)
	{
		string1[i] = string2[i];
	}
	printf("\nAfter copying second string in first string, first string = %s\n\n", string1);

	// Задание 8
	printf("Input symbol: ");
	char symbol;
	CLEARBUFF;
	symbol = getchar();

	for (int i = 0; i < _DVATSATb; i++)
	{
		if (string1[i] == symbol)
		{
			printf("\nSymbol was found in %d letter of first string\n\n", i + 1);
			break;
		}
		else if (i == _DVATSATb - 1)
		{
			printf("\nSymbol wasn't found in first string\n\n");
		}
	}

	CLEARBUFF;
	// Задание 11 
	char string3[_DVATSATb] = "\0";
	char string4[_DVATSATb] = "\0";

	printf("Input first string: ");
	gets_s(string3);

	printf("Input second string: ");
	gets_s(string4);

	int size = 0;
	for (int i = 0; i < _DVATSATb; i++)
	{
		for (int j = 0; j < _DVATSATb; j++)
		{
			if (string3[i] == '\0' || string4[j] == '\0')
			{
				break;
			}
			else if (string3[i] == string4[j])
			{
				size++;
			}
		}
	}

	printf("Size: %d", size);

	scanf_s("%d", &n);
	return 0;
}

