#include <stdio.h>

int main () {

	// declare file pointer
	FILE *file_ptr;

	// declare loop counter variable
	int i;

	// declare and initialize char array
	char text[50] = {"Text, one character at a time."};

	// create file for writing to
	file_ptr = fopen("chars.txt", "w");

	// display confirmation message then close(fileName)
	if(file_ptr != NULL){
		printf("File chars.txt created\n");
		for(i = 0; text[i]; i++){
			putc(text[i], file_ptr);
		}
		fclose(file_ptr);
	}
	else {
		printf("Unable to create file\n");
		return 1;
	}

	return 0;
}