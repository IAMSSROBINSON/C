#include <stdio.h>

int main () {

	// declare and initialize a regular variable and a pointer variable 
	int number = 100;
	int *ptr_number = &number;

	// display contents of both variables and value dereferenced 
	printf("\nRegular variable value: %d\n", number); // 100
	printf("Pointer variable stores memory of regular variable: %p\n", ptr_number); // 0x16bb7b188
	printf("Pointer variable deferenced value pointed to: %d\n\n", *ptr_number); // 100

	// assign new value to regular variable via pointer and display results
	*ptr_number = 200;
	printf("Regular variable value: %d\n", number); // 200
	printf("Pointer variable stores memory of regular variable: %p\n", ptr_number); // 0x16bb7b188
	printf("Pointer variable deferenced value pointed to: %d\n\n", *ptr_number); // 200

	// confirm the pointer is holding the correct address
	printf("Addressof normal variable: \t\t\t%p\n", &number); // 0x16bb7b188
	printf("Addressof normal variable through pointer: \t%p\n", ptr_number); // 0x16bb7b188

	// memory address will change every time the program executes but the values should all be consistent

	return 0;
}