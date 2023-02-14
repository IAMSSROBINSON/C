#include <stdio.h>
#include <stdlib.h>

int main () {

	// declare 3 int variables 
	// declare and initialize 3 char arrays
	int number1, number2, number3;
	char string1[10] = "12eight", string2[10] = "-65.8", string3[10] = "x13";

	// convert each string to int value and display
	number1 = atoi(string1);
	printf("String %s converts to Integer %d: \n", string1, number1);

	return 0;
}