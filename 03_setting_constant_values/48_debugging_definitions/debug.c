#include <stdio.h>

#define DEBUG 1




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
		#ifndef DEBUG // No #define instruction exists
		printf("\nDEBUG is not defined\n"); // DEBUG is not defined.  
		#endif
	#endif


	return 0;
}