#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define _SIZE 100

void arrOfN(int n, int ptrArr[], int size)
{
	int delitel = 1;
	int k = size;
	while (k != 1)
	{
		delitel *= 10;
		k--;
	}

	for(int i = 0, temp = n; i < size && temp != 0; i++)
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
					if (j + 1 != size - 1)
					{
						string[j] = string[j + 1];
					}
					else {}
				}
				size--;
				deleteSpaces(string, size);
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

	gets_s(string);
	deleteSpaces(string, _SIZE);
	
	_getche();
	return 0;
}