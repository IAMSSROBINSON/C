#include <stdio.h>

int main () {

	// declare and initialize int variable
	int number = 7;

	// use ternary to output correct result parity dependant
	printf("The number: %d is: %s\n",number, (number % 2 == 0) ? "Even" : "Odd");

	return 0;
}