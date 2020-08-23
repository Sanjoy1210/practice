#include <stdio.h>

int main()
{
    double r, pi = 3.1416;
	double area_circle, area_square;
	
	scanf("%lf", &r);
	
	area_circle = r * r * pi;
	area_square = 4 * r * r;
	
	double result = area_square - area_circle;
	
	printf("%lf\n", result);
	
	return 0;
}