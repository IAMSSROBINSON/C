#include <stdio.h>

// declare custom function prototype
void counting_down_from (int startingNumber);

int main () {

	// declare int variable 
	int startingNumber;

	// prompt user for input
	printf("Please enter a whole number:");
	scanf("%d", &startingNumber);
	printf("\n");

	// call custom function and pass int variable
	counting_down_from (startingNumber);

	// display message when program resumes from custom function call
	printf("We have lift off!\n");

	return 0;
}

// define custom function
// display value
// modify value / decrement value
// add base case condition
void counting_down_from (int startingNumber) {
	printf("%d\n", startingNumber);
	startingNumber--;
	if(startingNumber < 0){
		return;
	} else {
		counting_down_from(startingNumber);
	}
}