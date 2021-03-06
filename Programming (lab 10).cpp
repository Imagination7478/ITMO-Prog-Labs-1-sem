#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define _SIZE 100
#define CLEARBUFF getchar()

void arrOfN(int n, int ptrArr[], int size)
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

void deleteSpaces(char string[], int size)
{
	for (int i = 0; i < size && string[i] != '\0'; i++)
	{
		if (i == 0) {}
		else
		{
			if (string[i] == ' ' && string[i - 1] == ' ')
			{
				for (int j = i; j < size - 1; j++)
				{
					if (j + 1 != size - 1 && string[j] != '\0')
					{
						string[j] = string[j + 1];
					}
					else { break; }
				}
				size--;
				deleteSpaces(string, size);
			}

			if (string[i] == '\0' && string[i - 1] == ' ')
			{
				string[i - 1] = string[i];

				size--;
			}

			int j;
			if (string[i - 1] == '\'')
			{
				j = i;
				while (string[j] != '\'' && string[j] != '\0') { j++; }

				if (string[i] == ' ') 
				{
					j = i;
					while (j + 1 < size && string[j] != '\0')
					{
						string[j] = string[j + 1];
						j++;
					}
					size--;
				}
			}
			if (string[i - 1] == '\"')
			{
				j = i;
				while (string[j] != '\"' && string[j] != '\0') { j++; }

				if (string[j] == '\"')
				{
					if (string[i] == ' ')
					{
						j = i;
						while (j + 1 < size && string[j] != '\0')
						{
							string[j] = string[j + 1];
							j++;
						}
						size--;
					}
				}
			}
			if (string[i - 1] == '(')
			{
				if (string[i] == ' ')
				{
					j = i;
					while (j + 1 < size && string[j] != '\0')
					{
						string[j] = string[j + 1];
						j++;
					}
					size--;
				}
			}
			if (string[i - 1] == '[')
			{
				if (string[i] == ' ')
				{
					j = i;
					while (j + 1 < size && string[j] != '\0')
					{
						string[j] = string[j + 1];
						j++;
					}
					size--;
				}
			}
			if (string[i - 1] == '{')
			{
				if (string[i] == ' ')
				{
					j = i;
					while (j + 1 < size && string[j] != '\0')
					{
						string[j] = string[j + 1];
						j++;
					}
					size--;
				}
			}
		}
	}
}

int main()
{
	// Вариант 18
	// Задание 3
	printf("Input n: ");
	int n;
	scanf_s("%d", &n);

	int temp = n, size = 0;
	while (temp != 0)
	{
		temp = temp / 10;
		size++;
	}
	int *ptrArr = (int*)malloc(size * sizeof(int));
	arrOfN(n, ptrArr, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d element of arr from N = %d\n", i + 1, ptrArr[i]);
	}

	free(ptrArr);

	// Задание 5
	printf("Input string: ");
	char string[_SIZE] = "\0";

	CLEARBUFF;

	gets_s(string);
	deleteSpaces(string, _SIZE);

	for (int i = 0; i < _SIZE && string[i] != '\0'; i++)
	{
		printf("%c", string[i]);
	}

	_getche();
	return 0;
}

