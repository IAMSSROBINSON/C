#include <stdio.h>
#include "utils.h" // preprocessor directive to include the custom header file
#include <string.h>


// declare custom function prototype
void getNumber();

int main () {

// call function
getNumber();

return 0;
}

// define function
// declare 2 variables
void getNumber(){
	int number;
	char again;

	// prompt user for input
	printf("Please enter a number to square: \n");
	scanf("%d", &number);
	printf("%d squared is %d\n", number, square(number));
	
	// prompt user for another input and run condition 
	printf("Square another number? Y or N: \n");
	scanf("%1s", &again);

	if((strcmp(&again, "Y") == 0) || (strcmp(&again, "y") == 0)){
		getNumber();
	} else {
		return;
	}
}