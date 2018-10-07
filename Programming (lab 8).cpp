#include <stdio.h>
#include <string.h>
#include <conio.h>
#define _DVATSATb 20

int main(void)
{
	// Вариант 18
	// Задание 1
	char string1[_DVATSATb];
	char string2[_DVATSATb];

	printf("Input first string: ");
	gets_s(string1);

	printf("Input second string: ");
	gets_s(string2);

	char resultString[100] = "\0";

	strcat_s(resultString, string1);
	strcat_s(resultString, string2);

	printf("Result string is %s\n", resultString);

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
			printf("%d element secondString > %d element firstString\n", i + 1, i + 1);
			i++;
		}
	}
	// Задание 5
	for (int i = 0; i < _DVATSATb; i++)
	{
		string1[i] = string2[i];
	}
	printf("After copying second string in first string, first string = %s\n", string1);

	// Задание 8
	printf("Input symbol: ");
	char symbol;
	symbol = _getche();

	for (int i = 0; i < _DVATSATb; i++)
	{
		if (string1[i] == symbol)
		{
			printf("\nSymbol was found in %d letter of first string\n", i + 1);
			break;
		}
		else if (i == _DVATSATb - 1)
		{
			printf("\nSymbol wasn't found in first string\n");
		}
	}

	// Задание 11 
	// TODO


	scanf_s("%d", &n);
	return 0;
}