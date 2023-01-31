#include <stdio.h>

int main () {

	// declare and initialize an int variable a char variable
	int number = 100;
	char letter = 'A';

	// add switch statement that attempts to match the int variable
	switch(number){
		case 100:
			printf("Number is %d\n", number);
			break;
		case 200:
			printf("Number is %d\n", number);
			break;
		case 300:
			printf("Number is %d\n", number);
			break;
		default:
			printf("Number is not found\n");
	}

	// add switch statement that attempts to match the char variable
	switch(letter){
		case 'A':
		case 'B':
		case 'C':
			printf("Letter is %c\n", letter);
			break;
		default:
			printf("Letter is not found\n");
	}


	return 0;
}

