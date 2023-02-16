#include <stdio.h>

// declare unamed struct with 2 members and 1 Tag
typedef struct {
	int x;
	int y;
} Point;

// create two variables of the TagName data-type, initialize both members of the struct for one of the variables
Point top = {15, 24};
Point bottom;

// second structure defining data-type with two nested struct members from the first struct TagName
typedef struct {
	Point a;
	Point b;
} Box;

// declare variable of second struct data-type, initialize members
Box rectangle = {6, 12, 30, 20};

int main () {

	// initialize both members of the other variable created 
	bottom.x = 5;
	bottom.y = 8;

	// display output
	printf("Top x: %d\tTop y: %d\n", top.x, top.y);
	printf("Bottom x: %d\tBottom y: %d\n", bottom.x, bottom.y);

	// output nested structure values
	printf("\nPoint a x: %d", rectangle.a.x);
	printf("\nPoint a y: %d", rectangle.a.y);
	printf("\nPoint b x: %d", rectangle.b.x);
	printf("\nPoint b y: %d\n", rectangle.b.y);
	

	return 0;
}