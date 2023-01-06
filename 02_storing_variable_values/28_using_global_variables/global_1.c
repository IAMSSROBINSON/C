#include <stdio.h>


// global static variable declaration only accessible within this file
static int sum = 100;

int main () {

// declare use of the global static
extern int sum;
printf("Sum is %d\n", sum);

// declare use of second global variable
extern int num;
printf("Num is %d\n", num);

	// required by function declaration:
	return 0;
}

// second file global_2.c created
	// extern int num = 200; 
// to compile both files into single exe program:
	//  gcc global_1.c global_2.c -o global.exe
