#include <stdio.h>

// declare unnamed struct data-type with 3 members and a tagName
typedef struct {
		int number;
		char letter;
		char *str;
} Distinct;

// declare unamed union data-type with 3 members and a tagName
typedef union {
		int number;
		char letter;
		char *str;
} Unified;


int main () {

	// declare variable of struct data-type and initialize members
	Distinct sData = {10, 'C'};
	sData.str = "Program";

	// declare variable of union data-type 
	Unified uData;

	// display values and memory addresses of struct members
	printf("STRUCTURE:\nNumber: %d", sData.number);
	printf("\tStored at: %p\n", &sData.number);

	printf("Letter %c", sData.letter);
	printf("\tStored at: %p\n", &sData.letter);

	printf("String: %s", sData.str);
	printf("\tStored at: %p\n", &sData.str);


	// assign value to first union member and display value and address
	uData.number = 16;
	printf("\nUNION:\nNumber: %d", uData.number);
	printf("\tStored at: %p", &uData.number);

	// assign value to second union member and display value and address
	uData.letter = 'A';
	printf("\nLetter: %c", uData.letter);
	printf("\tStored at: %p", &uData.letter);

	// assign value to third union member and display value and address
	uData.str = "Union";
	printf("\nString: %s", uData.str);
	printf("\tStored at: %p\n\n", &uData.str);


	return 0;
}