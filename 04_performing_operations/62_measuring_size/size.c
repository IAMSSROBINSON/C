#include <stdio.h>

	int main () {

	//declare an initialize int value
	int number = 1234567890;

	// display sizeof data-type and variableName / data-object
	printf("\nData-type memory allocation sizeof(int): %lu bytes\n", sizeof(int)); // 4 bytes
	printf("Data-object name memory allocation sizeof(number): %lu bytes\n", sizeof(number)); // 4 bytes

	printf("Size of an int array is: %lu bytes\n", sizeof(int[5])); // 4 * 5 = 20 bytes

	// display size allocated to a struct
	struct studentDetails { 
		int mark;
		char class;
	} saveResult;

	printf("Size of struct: %lu bytes\n", sizeof(saveResult)); // returns 8 bytes
	// int(4 bytes) + char(1 byte) should = 5bytes but 32-bit computer systems can add a padding value as they like to read and write data in word size chunks of 4 bytes and thus allocate memory in multiples of 4 so 8 bytes are allocated here
	return 0;
}