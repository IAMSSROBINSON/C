#include <stdio.h>

int main () {

	// two-dimensional array
	int array[2][3] = {
		{
			'A', 'B', 'C'
		},
		{
			1,2,3 
		}
	};

	printf("\nElement[0[0] contains: %c\n", array[0][0]); // 'A' 
	printf("Element[0[1] contains: %c\n", array[0][1]); 	// 'B'
	printf("Element[0[2] contains: %c\n\n", array[0][2]); // 'C'

	printf("Element[1[0] contains: %d\n", array[1][0]); 	// 1
	printf("Element[1[1] contains: %d\n", array[1][1]); 	// 2
	printf("Element[1[2] contains: %d\n\n", array[1][2]); 	// 3 


	return 0;
}

// Using character values e.g. '1', '2' '3' they would print as ASCII code values 49, 50, 51 if printing with format specifier %d as the array is of int data-type but %c displays them at letter characters 1, 2, 3(not integers 1, 2 and 3). Using integer values 1, 2 and 3 with format specifier %d will produce integer values.