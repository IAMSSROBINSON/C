#include <stdio.h>

int main () {

	// declare enumerated set of const variables
	enum SNOOKER {RED=1, GREEN, BROWN, BLUE, PINK, BLACK};

	// declare and initialize a variable of enum data-type and give it a value from the enum set
	enum SNOOKER pair = RED + BLACK;

	// print the value of variable created of enum data-type
	printf("\nenum data-type pair value: %d\n", pair);

	// create a custom data-type
	typedef unsigned short int USINT;

	// declare and initialize a variable of the custom data-type and print result
	USINT number = 16;
	printf("\nUnsigned short int value: %d\n", number);

	return 0;
}