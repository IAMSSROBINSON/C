#include <stdio.h>
#include <string.h>


int main () {

	// declare file ptr and char array
	FILE *file_ptr;
	char sentence[50];

	// open text file for reading + appending 
	file_ptr = fopen("quote.txt", "r+a");

	// read and display all lines from file
	if(file_ptr != NULL){
		printf("File quote.txt opened\n");

		while(fgets(sentence, 50, file_ptr)){
			printf("%s", sentence);
		}

	// copy new string to char array
	strcpy(sentence, "...By Marcus Aurelius");
	fputs(sentence, file_ptr);

	// close the opened file
	fclose(file_ptr);
	return 0;
	}
	else {
		// failure message
		printf("Unable to open file\n");
		return 1;
	}


	return 0;
}


/*

DISPLAYED OUTPUT - BEFORE APPENDING:

“Dwell on the beauty of life. Watch the stars, and see yourself running with them. Think constantly on the changes of the elements into each other, for such thoughts wash away the dust of earthly life.”


DISPLAYED OUTPUT - AFTER APPENDING:

“Dwell on the beauty of life. Watch the stars, and see yourself running with them. Think constantly on the changes of the elements into each other, for such thoughts wash away the dust of earthly life.”...By Marcus Aurelius

*/