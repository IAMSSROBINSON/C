#include <stdio.h>
#include <stdlib.h>

// declare platform specific function prototype
// int _msize(int *bytes); // Windows
// malloc_usable_size(); // Linux


int main () {

	// declare int variable and int pointer variable
	int size;
	int *memory;

	// request memory for 100 int
	memory = malloc(100 * sizeof(int));

	// display details of allocated memory block if successful or otherwise
	if(memory == NULL){
		printf("!!!Failed! Memory not allocated. Insufficient memory!!!\n");
		return 1; // or exit(1); to quit program
	} else {
		// size = _msize(memory);
		size = 100 * sizeof(int);
		printf("Success! Memory allocated.\n");
		printf("Size of block for 100 ints: %d bytes.\n", size);
	}

	// increase allocated memory block and display details or otherwise
	memory = realloc(memory, size + (100 * sizeof(int)));
	if(memory != NULL){
		// size = _msize(memory);
		size =  size + (100 * sizeof(int));
		printf("Size of block for 200 ints: %d bytes.\n", size);
		printf("Beginning at %p\n", memory);
	} else {
		printf("!!!Failed! Memory not allocated. Insufficient memory!!!\n");
		return 1;
	}

	// free allocated memory
	free(memory);
	return 0;
}

/*

OUTPUT DISPLAYED:

Success! Memory allocated.
Size of block for 100 ints: 400 bytes.
Size of block for 200 ints: 800 bytes.
Beginning at 0x146f04080

*/