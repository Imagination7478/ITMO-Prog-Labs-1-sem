// 666.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Вариант 18
	// Задание 1
	int *ptrArr1 = (int*)malloc(4);

	for (int i = 0; i < 4; i++)
	{
		ptrArr1[i] = 1000 + i;
	}
	for (int j = 0; j < 4; j++)
	{
		printf("%d element arr = %d\n\n", j + 1, *(ptrArr1 + j));
	}

	// Задание 2
	printf("Input Size: ");
	int size;
	scanf("%d", &size);
	int *ptrArr2 = (int*)malloc(size * sizeof(int));

	printf("\n");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &ptrArr2[i]);
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", ptrArr2[i]);
	}
	free(ptrArr2);
    return 0;
}

