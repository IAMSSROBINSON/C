#include <stdio.h> // instruction to preprocessor to include the standard library for input/output functions

int main () {
	int num = 100; // integer variable declared and initialized
	double pi = 3.1415926536; // double variable declared and initialized

	// statements to output variables in specified formats
	printf("Integer is %d \n", num);
	printf("Values are %d and %f \n", num, pi);
	printf("%%7d displays %7d \n", num); // 7 spaces before the value using numberOfSpaces after %
	printf("%%07d displays %07d \n", num); // spaces filled with 0s, totalNumberOfSpaces including 0s and value = 7 (display % character within printf by adding another %% character)
	printf("Pi is approximately %1.10f \n", pi); // 1 space to the left of value. value to 10 decimal places
	printf("Right-aligned %20.3f rounded pi \n", pi); // 20 spaces to the left will position value to the right. value to 3 decimal places
	printf("Left-aligned %-20.3f rounded pi \n", pi); // 20 spaces to the right with minus(-) symbol will position value to the left. value to 3 decimal places

	return 0; // return 0 integer value as required by function declaration
}