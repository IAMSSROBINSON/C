#include <stdio.h>
#include <time.h>

// declare function prototype to pause program
void wait (int seconds);

int main () {

	// declare two time_t variables
	// declare int variable
	time_t go;
	time_t stop;
	int i;

	// get current time	
	go = time(NULL);
	printf("\nStarting countdown...\n\n");

	// add loop to output a countdown value and call other function on each iteration
	for (i = 10; i > -1; i--)
	{
		printf(" - %d", i);
		wait(1);
	}

	// get current time and display time taken to run loop
	stop = time(NULL);
	printf("\bRuntime: %.0f seconds\n", difftime(stop, go));
	

	return 0;
}

// function definition
// initialize clock_t variable at future point beyond current elapsed running time
void wait (int seconds) {
	clock_t end_wait = (clock() + (seconds * CLOCKS_PER_SEC));

	// add empty loop that terminates when current time reaches future point returning control to loop in main function
	while(clock() < end_wait){
		
	}
}

/*

DISPLAYED OUTPUT: 

Starting countdown...

 - 10 - 9 - 8 - 7 - 6 - 5 - 4 - 3 - 2 - 1 - Runtime: 11 seconds

*/