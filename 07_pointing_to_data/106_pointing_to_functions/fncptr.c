#include <stdio.h>

// declare custom function prototype with in argument
int bounce (int a);

// declare custom function prototype with function pointer argument and int argument
int caller (int (*function) (int), int b);

int main () {

	// declare int variable 
	int num;
	// declare and initialize a function pointer variable 
	int (*fptr)(int) = bounce;


	// assign value to int variable by calling the regular function via the function pointer and output value it returns
	num = (*fptr)(10); // 10
	printf("\nReturned value: %d\n", num); // 33

	// assign new value to int variable by passing function pointer and integer to another function, which in turn calls the regular function and output return value
	num = caller(fptr, 5); // 5
	printf("\nReturned value: %d\n", num); // 18


	return 0;
}	

// define 1st custom function to output received value and return and integer
int bounce (int a) {
	printf("\nReceived value: %d\n", a); 
	return ((3 * a) + 3); 
}

// define 2nd custom function to call a regular function from a received function pointer, and pass it as a received integer value
int caller (int (*function)(int), int b){
	return (*function)(b);
}