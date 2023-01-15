#include <stdio.h>

// preprocessor instruction to establish a macro
#define DEBUG 3



int main () {
	// preprocessor instruction to evaluate and report the status of DEBUG macro
	#if DEBUG == 1 
	printf("\nDEBUG status is 1\n"); // DEBUG status is 1
	#elif DEBUG == 2
	printf("\nDEBUG status is 2\n"); // DEBUG status is 2
	#else	
		#ifdef DEBUG // DEBUG defined but value unmatched
		printf("\nDEBUG is defined\n"); // DEBUG is defined
		#endif
		#ifndef DEBUG 
		printf("\nDEBUG is not defined\n"); 
		#endif
	#endif


	return 0;
}