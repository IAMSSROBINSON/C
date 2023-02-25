#include <stdio.h>

int main () {

	// declare two file pointers, char array variable and int variable
	FILE *original_ptr;
	FILE *copy_ptr;

	char buffer[1000];
	int number;

	// open existing file to read
	// open/create a file to write
	original_ptr = fopen("./original.txt", "r");
	copy_ptr = fopen("./copy.txt", "w");

	// validate files were opened
	// read original file contents to char array, count each object read
	// write array content to second file
	if((original_ptr != NULL) && (copy_ptr != NULL)){
		number = fread(buffer, 1, 1000, original_ptr);
		fwrite(buffer, 1, number, copy_ptr);

		// close files when complete
		fclose(original_ptr);
		fclose(copy_ptr);

		// print confirmation message
		printf("Done: original.txt copied to copy.txt\n");
		printf("%d objects copied\n", number);
		return 0;
	} 
	// failed message
	else{
		if(original_ptr == NULL){
			printf("Unable to open original.txt");
		}
			if(copy_ptr == NULL){
			printf("Unable to open copy.txt");
		}
		return 1;
	}

	return 0;
}