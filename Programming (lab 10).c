#include <stdio.h>

// Наибольший общий делитель
int NOD(int var1, int var2)
{
	int nod;
	if (var1 > var2)
	{
		nod = var2;
		int result = var1 % var2;
		int i = 0;
		while(result != 0)
		{
			nod = result;
			
			if (i >= 1)
			{
				result = nod % result;
			}
			else
			{
				result = var2 % result;
			}
			i++;
		}
	}
	else
	{
		nod = var1;
		int result = var2 % var1;
		int i = 0;
		while(result != 0)
		{
			nod = result;
			
			if (i >= 1)
			{
				result = nod % result;
			}
			else
			{
				result = var1 % result;
			}
			i++;
		}
	}
	
	return nod;
}

int arrOfN(int n)
{
	int temp = n;
	int size = 0;
	while (temp != 0)
	{
		temp = temp / 10;
		size++;
	}
	*ptrArr = (int*)malloc(size, sizeof(int));
	for(int i = 0, temp = n, int delitel = size * 10; i < size, temp != 0; i++)
	{
		temp 
		ptrArr[i] = 
	}
}

int main()
{
	//printf("%d", NOD(15, 5));
	// Вариант 18
	printf("Input n: ");
	int n;
	scanf("%d", &n);
	arrOfN(n);
	
	
	return 0;
}