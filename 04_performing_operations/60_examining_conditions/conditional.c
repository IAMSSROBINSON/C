#include <stdio.h>

int main () {

	// declare and initialize int variable
	int number = 100;

	// use ternary to output correct result parity dependant
	printf("The number: %d is: %s\n",number, (number % 2 == 0) ? "Even" : "Odd"); // The number: 100 is: Even


	// output correct phrase dependent on result
	printf("There %s ", (number == 1) ? "is" : "are"); // There are
	printf("%d %s\n", number, (number == 1) ? "apple" : "apples"); // 100 apples

	return 0;
}