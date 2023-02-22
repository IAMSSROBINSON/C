#include <stdio.h>

int main () {

	// declare file pointer
	FILE *file_ptr;

	// create file for writing to
	file_ptr = fopen("data.txt", "w");

	// display message confirmation
	if(file_ptr != NULL){
		printf("Success! File created.\n");
		fclose(file_ptr);
	} else {
		printf("Failed! Unable to create file.\n");
	}

	return 0;
}