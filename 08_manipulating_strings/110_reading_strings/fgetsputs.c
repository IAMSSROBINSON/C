#include <stdio.h>

int main () {

	// declare char array
	char stringArray[51];

	// ask user for input and assign to char array
	printf("Enter upto 50 characters with spaces: \n");

	// use fgets to take characters and spaces as characters 
	fgets(stringArray, sizeof(stringArray), stdin);

	// display the input
	printf("fgets() reads: \n");

	// puts adds newline character automatically at the end of string
	puts(stringArray);

	// repeat above to see limitations of using scanf() function
	printf("Enter upto 50 characters with spaces again: \n");

	scanf("%s", stringArray); // string array is a pointer so the name references the memory address so no need for the & addressof operator 
	
	printf("scanf() reads: \n");
	printf("%s\n", stringArray);


	return 0;
}

/*

DISPLAYED OUTPUT:

Enter upto 50 characters with spaces: 
hello how are you?
fgets() reads: 
hello how are you?

Enter upto 50 characters with spaces again: 
hello how are you?
scanf() reads: 
hello

*/
