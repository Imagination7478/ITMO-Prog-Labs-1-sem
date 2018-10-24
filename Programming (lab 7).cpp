#include <stdio.h>
#include <conio.h>

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

union
{
	unsigned short bit;
	struct
	{
		unsigned short play : 1;
		unsigned short pause : 1;
		unsigned short write : 1;
	} mp3;
} device;


int main(void)
{
	// Вариант 18
	// Задание 1
	enum LAMPS lamp1,lamp2,lamp3;
	lamp1 = NAKALIVANYA;
	lamp2 = DAY_LIGHT;
	lamp3 = GALLOGENOVYE;

	switch (lamp3)
	{
	case NAKALIVANYA:
	{
		printf("Number of element 1\n");
		break;
	}
	case DAY_LIGHT:
	{
		printf("Number of element 2\n");
		break;
	}
	case GALLOGENOVYE:
	{
		printf("Number of element 3\n");
		break;
	}
	}

	// Задание 2
	struct shape rectangle;
	printf("Input a: ");
	scanf_s("%d", &rectangle.a);

	printf("Input b: ");
	scanf_s("%d", &rectangle.b);

	int S = rectangle.a * rectangle.b;

	printf("Rentangle's S = %d\n", S);

	// Задание 3
	printf("Input number: ");
	scanf_s("%X", &device.bit);

	device.mp3.play ? printf("Play on\n") : printf("Play off\n");
	device.mp3.pause ? printf("Pause on\n") : printf("Pause off\n");
	device.mp3.write ? printf("Write on\n") : printf("Write off\n");


	_getche();
	return 0;
}

