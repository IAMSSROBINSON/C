#include <stdio.h>

// declare struct with two members and a tag that will use the struct structName as a data-type
struct coordinates {
	int x;
	int y;
} point;

// create another instance of the struct structName data-type
struct coordinates top;


int main () {

	// initialize the members of the first struct instance
	point.x = 5;
	point.y = 8;

	// initialize the members of the second struct instance
	top.x = 15;
	top.y = 24;

	// output values stored in each struct member
	printf("point x: %d, point y: %d\n", point.x, point.y); // point x: 5, point y: 8
	printf("top x: %d, top y: %d\n", top.x, top.y); // top x: 15, top y: 24


	return 0;
}