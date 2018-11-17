#pragma once
#include <conio.h>
#include <math.h>
struct point
{
	int x;
	int y;
};

struct shape
{
	point A;
	point B;
	point C;

	float AB;
	float BC;
	float CA;
};

void buildVector(point A, point B, point C, shape &triangle)
{
	triangle.AB = sqrt(powf(triangle.B.x - triangle.A.x, 2) + powf(triangle.B.y - triangle.A.y, 2));

	triangle.BC = sqrt(powf(triangle.C.x - triangle.B.x, 2) + powf(triangle.C.y - triangle.B.y, 2));

	triangle.CA = sqrt(powf(triangle.C.x - triangle.A.x, 2) + powf(triangle.C.y - triangle.A.y, 2));
}

float SOfTriangle(const float a, const float b)
{
	return a * b * 0.5;
}

float POfTriangle(const float a, const float b, const float c)
{
	return a + b + c;
}