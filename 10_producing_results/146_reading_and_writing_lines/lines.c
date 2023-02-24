#include <stdio.h>

int main () {

	// declare file ptr and char array

	FILE *file_ptr;
	char sentence[50];

	// open text file for reading + appending 
	file_ptr = fopen("quote.txt", "r+a");
	if(file_ptr != NULL){
		printf("File quote.txt opened\n");

		while(fgets(sentence, 50, file_ptr)){
			printf("%s", sentence);
		}
	}





	return 0;
}