#include <stdio.h>

int main () {

	// declare int variable and declare and initialize an int array 
	int i;
	int numsArray[5] = {1, 2, 3, 4, 5};

	// declare and initialize pointer variables to the address of each element in the array
	int *ptr0 = &numsArray[0];
	int *ptr1 = &numsArray[1];
	int *ptr2 = &numsArray[2];
	int *ptr3 = &numsArray[3];
	int *ptr4 = &numsArray[4];

	// declare and initialize int pointer array to hold the address
	int *ptrs[5] = {ptr0, ptr1, ptr2, ptr3, ptr4};

	// display address and values of pointer variables
	for(i = 0; i < 5; i++){
		printf("Address: %p\tValue: %d\n", ptrs[i], *ptrs[i]);
	}
		// Address: 0x16f3fb1d0    Value: 1
		// Address: 0x16f3fb1d4    Value: 2
		// Address: 0x16f3fb1d8    Value: 3
		// Address: 0x16f3fb1dc    Value: 4
		// Address: 0x16f3fb1e0    Value: 5

	// declare and initialize a char array, a pointer to that array and a char pointer array with a string in each element
	char str[10] = {'C', ' ', 'i', 's', ' ', 'f', 'u', 'n', '!', '\0'};
	char *string = str;

	// output char array
	printf("\nThe string is: %s\n\n", string); 
		// The string is: C is fun!


	char *strings[3] = {"Moon", "Stars", "Sky"};

	// output char array
	for(i = 0; i < 3; i++){
		printf("String %d: %s\n", i, strings[i]);
	}
		// String 0: Moon
		// String 1: Stars
		// String 2: Sky

	return 0;
}