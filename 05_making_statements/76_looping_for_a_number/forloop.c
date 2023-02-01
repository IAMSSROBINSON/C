#include <stdio.h>

int main () {

	// declare 2 int variables to be used later in the loop
	int i, j;

	// add for loop to display the outer loop counter on each iteration
	for(i = 1; i < 4; i++){
		printf("Outer loop iteration: %d\n", i);

		// add for loop to display the inner loop counter on each iteration
		for(j = 1; j < 4; j++){
			printf("\tInner loop iteration: %d\n", j);
		}
	}


	return 0;
}

// DISPLAYED PRINTED OUTPUT:

// Outer loop iteration: 1
//         Inner loop iteration: 1
//         Inner loop iteration: 2
//         Inner loop iteration: 3
// Outer loop iteration: 2
//         Inner loop iteration: 1
//         Inner loop iteration: 2
//         Inner loop iteration: 3
// Outer loop iteration: 3
//         Inner loop iteration: 1
//         Inner loop iteration: 2
//         Inner loop iteration: 3