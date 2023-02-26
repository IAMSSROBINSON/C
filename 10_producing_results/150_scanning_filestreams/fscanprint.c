#include <stdio.h>

int main () {

	// declare two pointer files
	// declare an int array variable
	// declare two int variables

	FILE *numbers_ptr, *hint_ptr;
	int numbers[20];
	int i, j;

	// open existing local file to read
	// open / create local file to write to
	numbers_ptr = fopen("numbers.txt", "r");
	hint_ptr = fopen("hint.txt", "w");

	// validate files were opened
	if((numbers_ptr != NULL) && (hint_ptr != NULL)){
		// scan integers from file into elements of int array
		for (i = 0; !feof(numbers_ptr); i++) // feof() if end of file used to test if end of file reached, exiting loop when reached
		{
			fscanf(numbers_ptr, "%d", &numbers[i]);	
		}
		
		// output array elements values
		fprintf(stdout, "\nTotal numbers found: %d\n", i);
		for (j = 0; j < i; j++)
		{
			fprintf(stdout, "%d ", numbers[j]);
		}

		// write array elements to file
		fprintf(hint_ptr, "fscanf and fprintf are flexible\n");
		for (j = 0; j < i; j++)
		{
			fprintf(hint_ptr, "%d ", numbers[j]);
		}

		// close files
		fclose(numbers_ptr);
		fclose(hint_ptr);
	}
	// failed message
	else
	{
		fprintf(stdout, "Unable to open file\n");
		return 1;
	}
	

	return 0;
}