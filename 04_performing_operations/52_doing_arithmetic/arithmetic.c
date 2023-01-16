#include <stdio.h>

int main () {
	
	// declare and initialize some integer variables
	int a = 5, b = 10, c = 15, d = 20;

	// print the result of arithmetic operations performed on the numbers:
	printf("\nAddition: %d\n", a + b); // 5 + 10 = 15
	printf("Subtraction: %d\n", b - a); // 10 - 5 = 5
	printf("Multiplication: %d\n", a * b); // 5 * 10 = 50
	printf("Division: %d\n", b / a); // 10 * 5 = 2
	printf("Modulus: %d\n\n", a % b); // 5 % 10 = 5

	// show the result of using prefix and postfix operators
	printf("\nPrefix increment: %d\n", ++d); // 21
	printf("\nPrefix now: %d\n", d); // 21
	printf("\nPostfix increment: %d\n",c++); // 15
	printf("\nPostfix now: %d\n", c); // 16
	
	return 0;
}