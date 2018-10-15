#include <stdio.h>
//#include <conio.h>
 //Compiler version gcc 6.3.0

struct shape
{
	int a;
	int b;
};

enum LAMPS
{
	NAKALIVANYA,
	DAY_LIGHT,
	GALLOGENOVYE
};

 int main(void)
 {
	// Вариант 18
	
	// Задание 1
	enum LAMPS lamp1, lamp2, lamp3;
	lamp1 = NAKALIVANYA;
	lamp2 = DAY_LIGHT;
	lamp3 = GALLOGENOVYE;
	
	switch(lamps)
	{
		case NAKALIVANYA:
		{
			printf("1");
			break;
		}
		case DAY_LIGHT:
		{
			printf("2");
			break;
		}
		case GALLOGENOVYE:
		{
			printf("3");
			break;
		}
	}
	
	// Задание 2
	struct shape rectangle;
	printf("Input a: \n");
	scanf("%d", &rectangle.a);
	
	printf("Input b: \n");
	scanf("%d", &rectangle.b);
	
	int S = rectangle.a * rectangle.b;
	
	printf("Rentangle's S = %d", S);
	
	// Задание 3
	// Битовые поля http://www.c-cpp.ru/books/bitovye-polya
	


 	
 	
 	return 0;
 }
    