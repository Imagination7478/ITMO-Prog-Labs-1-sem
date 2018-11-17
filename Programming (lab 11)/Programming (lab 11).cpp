#include <stdio.h>
#include "triangle.h"

int main()
{
	// Вариант 18
	///
	shape triangle;

	triangle.A.x = 6;
	triangle.A.y = 7;

	triangle.B.x = 2;
	triangle.B.y = 2;

	triangle.C.x = 6;
	triangle.C.y = 2;

	buildVector(triangle.A, triangle.B, triangle.C, triangle);

	printf("S of triangle = %f\n", SOfTriangle(triangle.CA, triangle.BC));
	printf("P of triangle = %f\n", POfTriangle(triangle.AB, triangle.BC, triangle.CA));
	///

	///
	printf("Input coordinates of first point\n");
	printf("Input x: ");
	scanf_s("%d", &triangle.A.x);
	printf("Input y: ");
	scanf_s("%d", &triangle.A.y);

	printf("Input coordinates of second point\n");
	printf("Input x: ");
	scanf_s("%d", &triangle.B.x);
	printf("Input y: ");
	scanf_s("%d", &triangle.B.y);

	printf("Input coordinates of third point\n");
	printf("Input x: ");
	scanf_s("%d", &triangle.C.x);
	printf("Input y: ");
	scanf_s("%d", &triangle.C.y);

	buildVector(triangle.A, triangle.B, triangle.C, triangle);

	printf("S of triangle = %f\n", SOfTriangle(triangle.CA, triangle.BC));

	printf("P of triangle = %f\n", POfTriangle(triangle.AB, triangle.BC, triangle.CA));
	///

	_getche();
	return 0;
}