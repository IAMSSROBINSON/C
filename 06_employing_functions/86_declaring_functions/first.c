#include <stdio.h>

// declare 3 function prototypes
void first();
int square5();
int cube5();

int main () {

	// declare an int variable
	int number;

	// call custom functions
	first();
	number = square5();
	printf("5 * 5 = %d\n", number); // 5 * 5 = 25
	printf("5 * 5 * 5 = %d\n", cube5()); // 5 * 5 * 5 = 125
	return 0;
}

// define custom functions
void first () {
	printf("Hello from the first function\n");  // Hello from the first function
}

int square5 () {
	int square = 5 * 5;
	return square;
}

int cube5 () {
	int cube = (5 * 5) * 5;
	return cube;
}