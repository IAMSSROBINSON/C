#include <stdio.h>

// preprocessor instruction to establish a macro
#define DEBUG 1



int main () {
	// preprocessor instruction to evaluate and report the status of DEBUG macro
	#if DEBUG == 1 
	printf("\nDEBUG status is 1\n");
	#elif DEBUG == 2
	printf("\nDEBUG status is 2\n");
	#else	
		#ifdef DEBUG 
		printf("\nDEBUG is defined\n");
		#endif
		#ifndef DEBUG
		printf("\nDEBUG is not defined\n");
		#endif
	#endif


	return 0;
}