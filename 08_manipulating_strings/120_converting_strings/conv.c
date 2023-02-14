#include <stdio.h>
#include <stdlib.h>

int main () {

	// declare 3 int variables 
	// declare and initialize 3 char arrays
	int number1, number2, number3;
	char string1[10] = "12eight", string2[10] = "-65.8", string3[10] = "x13";

	// convert each string to int value and display
	number1 = atoi(string1);
	printf("String: %s converts to Integer: %d \n", string1, number1);
	// String: 12eight converts to Integer: 12 

	number2 = atoi(string2);
	printf("String: %s converts to Integer: %d \n", string2, number2);
	// String: -65.8 converts to Integer: -65 

	number3 = atoi(string3);
	printf("String: %s converts to Integer: %d \n", string3, number3);
	// String: x13 converts to Integer: 0 

	// convert int variable to string binary equivalent base of 2 and display
	itoa(number1, string2, 2);
	printf("Decimal: %d is Binary: %s\n", number1, string1);
	// Decimal: 12 is Binary: 1100

	// convert int variable value to string containing octal and hexidecimal equivalents and store char length
	number2 = sprintf(string3, "%o", number1);
	printf("Decimal: %d is Octal: %s chars: %d\n", number1, string3, number2);
	//Decimal: 12 is Octal: 14 chars: 2

	number3 = sprintf(string3, "%x", number1);
	printf("Decimal: %d is Hexadecimal: %s chars: %d\n", number1, string3, number3);
	// Decimal: 12 is Hexadecimal: c chars: 1






	return 0;
}