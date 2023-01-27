#include <stdio.h>

// declare functions prototypes that pass int pointer to a function
void twice(int *ptr);
void thrice(int *ptr);

int main () {

// declare an initialize regular int variable with value
int number = 100;

// declare and initialize above variables address to pointer
int *ptr = &number;

// display address stored by pointer and display the dereferenced value
printf("\nPtr address: %p\n", ptr); // 0x16d6431c8
printf("Ptr value: %d\n\n", *ptr); // 100

// display value of regular variable
printf("Regular variable value: %d\n", number);

// call custom functions passing by reference the address of the original variable 
twice(ptr);
// display the modified original value of regular variable
printf("Modified regular variable value is now: %d\n", number); // 200

// call custom functions passing by reference the address of the original variable 
thrice(ptr);
// display the modified original value of regular variable
printf("Modified regular variable value is now: %d\n", number); // 600
	return 0;
}

// define the custom functions declared by the prototypes
void twice (int *number) {
	*number = (*number * 2);
}

void thrice (int *number) {
	*number = (*number * 3);
}