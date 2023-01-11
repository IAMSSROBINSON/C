#include <stdio.h>

int main () {

	const float PI = 3.141593; // declare constant value for PI

	float diameter;
	float circ;
	float radius;
	float area;

	printf("\nPlease enter value for diameter of a circle in millimeters: \n");
	scanf("%f", &diameter);

	circ = PI * diameter;
	radius = diameter / 2;
	area = PI * (radius * radius);

	printf("\nThe Diameter is: %.2f mm \n", diameter);
	printf("The Circumference is: %.2f \n", circ);
	printf("The Radius is: %.2f \n", radius);
	printf("The Area is: %.2f sq.mm \n", area);

	return 0;
}